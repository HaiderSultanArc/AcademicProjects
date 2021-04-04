#include <iostream>
#include <string>
#include "Stack.h"
#include <list>
#include <cmath>

using namespace std;

void stringReverse(Stack testStack);
void linkedListReverse(Stack testStack);
bool balancedBrackets(const string& bracketExpression);
string infixToPostfix(const string& infixExpression);
void evaluatePostfix(const string& expression, Stack testStack);
void evaluatePrefix(string expression, Stack testStack);
void menu(int& choice);

int main() {
    Stack testStack;

    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'M' and testType != 'm') {
        int choice;

        cout << endl << "Which Test Do you want to Run? Enter Number";
        cout << endl << "1) Reversing a String";
        cout << endl << "2) Revering a Linked List";
        cout << endl << "3) Balancing Brackets";
        cout << endl << "4) Prefix, Infix, Postfix Evaluation";
        cout << endl << endl << "Your Choice: ";
        cin >> choice;

        if (choice == 1) {
            stringReverse(testStack);
        }
        else if (choice == 2) {
            linkedListReverse(testStack);
        }
        else if (choice == 3) {
            string bracketExpression;

            cout << endl << "Enter an Expressing with Brackets: ";
            cin.ignore();
            getline(cin, bracketExpression);

            balancedBrackets(bracketExpression);
        }
        else if (choice == 4) {
            string expression;

            cout << endl << "Enter an Expression {Ex: ((1 + 2) * 3 - 4) * 5}: ";
            cin.ignore();
            getline(cin, expression);

            if (balancedBrackets(expression)) {
                expression = infixToPostfix(expression);
                evaluatePostfix(expression, testStack);
            }

            cout << endl << "Enter a Prefix Expression {Ex: - + * 2 3 * 5 4 9}: ";
            getline(cin, expression);

            evaluatePrefix(expression, testStack);
        }
    }
    else {
        int choice;

        while (true) {
            cout << endl << "Press any Key to Continue...";
            cin.ignore();

            menu(choice);

            if (choice == 1) {
                char inputData;

                cout << endl << "Enter Data you want to Add: ";
                cin >> inputData;

                testStack.push(inputData);
            }
            else if (choice == 2) {
                testStack.pop();
            }
            else if (choice == 3) {
                cout << endl << "Top Element in Stack: " << testStack.topElementData();
                cout << endl;
            }
            else if (choice == 4) {
                testStack.display();
            }
            else if (choice == 0) {
                break;
            }
            else {
                cerr << "Not an Option!";
            }
        }
    }
}

void stringReverse(Stack testStack) {
    string str;

    cout << endl << "Enter a String: ";
    cin.ignore();
    getline(cin, str);

    for (char ch : str) {
        testStack.push(ch);
    }

    cout << endl << "String before Reversing: " << str;

    for (char & ch : str) {
        ch = testStack.topElementData();
        testStack.pop();
    }

    cout << endl << "String after Reversing: " << str;
}

void linkedListReverse(Stack testStack) {
    list<char> testList;
    list<char>::iterator listElement;

    testList.push_back('L');
    testList.push_back('I');
    testList.push_back('S');
    testList.push_back('T');

    cout << endl << "Linked List before Reversing: ";

    for (listElement = testList.begin(); listElement != testList.end(); listElement++) {
        cout << *listElement;
    }

    for (listElement = testList.begin(); listElement != testList.end(); listElement++) {
        testStack.push(*listElement);
    }

    testList.clear();

    while (not(testStack.isEmpty())) {
        testList.push_back(testStack.topElementData());
        testStack.pop();
    }

    cout << endl << "Linked List after Reversing: ";

    for (listElement = testList.begin(); listElement != testList.end(); listElement++) {
        cout << *listElement;
    }
}

bool balancedBrackets(const string& bracketExpression) {
    Stack tempStack;

    for (char ch : bracketExpression) {
        if (ch == '[' or ch == '{' or ch == '(') {
            tempStack.push(ch);
        }
        else if (ch == ']' or ch == '}' or ch == ')') {
            if (tempStack.isEmpty() or (ch == ']' and tempStack.topElementData() != '[') or (ch == '}' and tempStack.topElementData() != '{') or (ch == ')' and tempStack.topElementData() != '(')) {
                break;
            }
            else {
                tempStack.pop();
            }
        }
    }

    if (tempStack.isEmpty()) {
        cout << endl << "Brackets in Expression: " << bracketExpression << " are Balanced" << endl;
        return true;
    }
    else {
        cout << endl << "Brackets in Expression: " << bracketExpression << " are not Balanced" << endl;
        return false;
    }
}

int operatorPrecedance(char op) {
    if (string(1, op).find_first_of("[]{}()") != string::npos) {
        return 4;
    }
    else if (op == '^') {
        return 3;
    }
    else if (string(1, op).find_first_of("/*") != string::npos) {
        return 2;
    }
    else if (string(1, op).find_first_of("+-") != string::npos) {
        return 1;
    }
    else {
        return 0;
    }
}

string infixToPostfix(const string& infixExpression) {
    Stack tempStack;
    string postfixExpression;

    for (char ch : infixExpression) {
        if (ch <= '9' and ch >= '0') {
            postfixExpression += ch;
            postfixExpression += " ";
        }
        else if (string(1, ch).find_first_of("^/*+-") != string::npos) {
            while (not(tempStack.isEmpty()) and string(1, tempStack.topElementData()).find_first_of("[{(") == string::npos and (operatorPrecedance(ch) > operatorPrecedance(tempStack.topElementData()))) {
                postfixExpression += tempStack.topElementData();
                postfixExpression += " ";
                tempStack.pop();
            }

            if (string(1, tempStack.topElementData()).find_first_of("/*") != string::npos) {
                postfixExpression += tempStack.topElementData();
                postfixExpression += " ";
                tempStack.pop();
            }

            tempStack.push(ch);
        }
        else if (string(1, ch).find_first_of("[{(") != string::npos) {
            tempStack.push(ch);
        }
        else if (string(1, ch).find_first_of(")}]") != string::npos) {
            while (not(tempStack.isEmpty()) and string(1, tempStack.topElementData()).find_first_of("[{(") == string::npos) {
                postfixExpression += tempStack.topElementData();
                postfixExpression += " ";
                tempStack.pop();
            }

            tempStack.pop();
        }
    }

    while (not(tempStack.isEmpty())) {
        postfixExpression += tempStack.topElementData();
        postfixExpression += " ";
        tempStack.pop();
    }

    return postfixExpression;
}

double performOperation(double op1, double op2, char operation) {
    if (operation == '+') {
        return op1 + op2;
    }
    else if (operation == '-') {
        return op1 - op2;
    }
    else if (operation == '*') {
        return op1 * op2;
    }
    else if (operation == '/') {
        if (op2 == 0) {
            cerr << "Exception: Division by 0 (for simplicity division will result in 0)";
            return 0;
        }
        else {
            return op1 / op2;
        }
    }
    else if (operation == '^') {
        return pow(op1, op2);
    }
    else {
        cerr << "Not an Operation!";
        return 0;
    }
}

void evaluatePostfix(const string& expression, Stack testStack) {
    for (char ch : expression) {
        if (ch <= '9' and ch >= '0') {
            testStack.push(int(ch) - 48);
        }
        else if (string(1, ch).find_first_of("+-*/^") != string::npos) {
            double op2 = testStack.topElementData();
            testStack.pop();
            double op1 = testStack.topElementData();
            testStack.pop();

            double result = performOperation(op1, op2, ch);

            testStack.push(char(result));
        }
    }

    cout << endl << "Postfix Expression: " << expression << " = " << double(testStack.topElementData());
}

void evaluatePrefix(string expression, Stack testStack) {
    for (int ch = int(expression.length() - 1); ch >= 0; ch--) {
        if (expression[ch] <= '9' and expression[ch] >= '0') {
            testStack.push(int(expression[ch]) - 48);
        }
        else if (expression[ch] == '+' or expression[ch] == '-' or expression[ch] == '*' or expression[ch] == '/') {
            double op1 = testStack.topElementData();
            testStack.pop();
            double op2 = testStack.topElementData();
            testStack.pop();

            double result = performOperation(op1, op2, expression[ch]);

            testStack.push(char(result));
        }
    }

    cout << endl << expression << " = " << double(testStack.topElementData());
}

void menu(int &choice) {
    if (cin.peek() == '\n') {
        cin.ignore();
    }

    system("cls");

    cout << endl << endl;
    cout << "Enter the Option Number from Following: ";
    cout << endl << "1) Push Element";
    cout << endl << "2) Pop Element";
    cout << endl << "3) Top Element";
    cout << endl << "4) Display Stack";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}