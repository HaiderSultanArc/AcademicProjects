#include <iostream>
#include <string>
#include <list>
#include "DataStructures.h"

using namespace std;

void stringReverse(Stack testStack);
void linkedListReverse(Stack testStack);
void balanceBrackets(Stack testStack);
void evaluatePostfix(string expression, Stack testStack);
void evaluatePrefix(string expression, Stack testStack);
void menu(int &choice);

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
            balanceBrackets(testStack);
        }
        else if (choice == 4) {
            string expression;

            cout << endl << "Enter a Postfix Expression (Ex: 2 3 * 5 4 * + 9 -): ";
            cin.ignore();
            getline(cin, expression);

            evaluatePostfix(expression, testStack);

            cout << endl << "Enter a Prefix Expression (Ex: - + * 2 3 * 5 4 9): ";
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
                Element* topElement;

                topElement = testStack.topElement();

                if (topElement != nullptr) {
                    cout << endl << "Top Element in Stack: " << topElement->data;
                    cout << endl;
                }
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

    for (int ch = 0; ch < str.length(); ch++) {
        str[ch] = testStack.topElement()->data;
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

    while (testStack.topElement() != nullptr) {
        testList.push_back(testStack.topElement()->data);
        testStack.pop();
    }

    cout << endl << "Linked List after Reversing: ";

    for (listElement = testList.begin(); listElement != testList.end(); listElement++) {
        cout << *listElement;
    }
}

void balanceBrackets(Stack testStack) {
    string bracketExpression;

    cout << endl << "Enter an Expressing with Brackets: ";
    cin.ignore();
    getline(cin, bracketExpression);

    for (char ch : bracketExpression) {
        if (ch == '[' or ch == '{' or ch == '(') {
            testStack.push(ch);
        }
        else if (ch == ']' or ch == '}' or ch == ')') {
            if (testStack.topElement() == nullptr) {
                break;
            }
            else if ((ch == ']' and testStack.topElement()->data != '[') or (ch == '}' and testStack.topElement()->data != '{') or (ch == ')' and testStack.topElement()->data != '(')) {
                break;
            }
            else {
                testStack.pop();
            }
        }
    }

    if (testStack.topElement() == nullptr) {
        cout << endl << "Brackets in Expression: " << bracketExpression << " are Balanced" << endl;
    }
    else {
        cout << endl << "Brackets in Expression: " << bracketExpression << " are not Balanced" << endl;
    }
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
}

void evaluatePostfix(string expression, Stack testStack) {
    for (int ch = 0; ch < expression.length(); ch++) {
        if (expression[ch] <= '9' and expression[ch] >= '0') {
            testStack.push(expression[ch]);
        }
        else if (expression[ch] == '+' or expression[ch] == '-' or expression[ch] == '*' or expression[ch] == '/') {
            double op2 = (testStack.topElement()->data >= '0' and testStack.topElement()->data <= '9') ? (testStack.topElement()->data - 48) : (testStack.topElement()->data);
            testStack.pop();
            double op1 = (testStack.topElement()->data >= '0' and testStack.topElement()->data <= '9') ? (testStack.topElement()->data - 48) : (testStack.topElement()->data);
            testStack.pop();

            double result = performOperation(op1, op2, expression[ch]);

            testStack.push(char(result));
        }
    }

    cout << endl << expression << " = " << double(testStack.topElement()->data);
}

void evaluatePrefix(string expression, Stack testStack) {
    for (int ch = expression.length() - 1; ch >= 0; ch--) {
        if (expression[ch] <= '9' and expression[ch] >= '0') {
            testStack.push(expression[ch]);
        }
        else if (expression[ch] == '+' or expression[ch] == '-' or expression[ch] == '*' or expression[ch] == '/') {
            double op1 = (testStack.topElement()->data >= '0' and testStack.topElement()->data <= '9') ? (testStack.topElement()->data - 48) : (testStack.topElement()->data);
            testStack.pop();
            double op2 = (testStack.topElement()->data >= '0' and testStack.topElement()->data <= '9') ? (testStack.topElement()->data - 48) : (testStack.topElement()->data);
            testStack.pop();

            double result = performOperation(op1, op2, expression[ch]);

            testStack.push(char(result));
        }
    }

    cout << endl << expression << " = " << double(testStack.topElement()->data);
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