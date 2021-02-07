#include <iostream>
#include "DataStructures.h"

using namespace std;

void menu(int &choice);

int main() {
    Stack testStack;

    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'M' and testType != 'm') {
        cout << endl << "Creating the Stack: ";
        testStack.push(10);
        testStack.push(20);
        testStack.push(30);
        testStack.push(40);
        testStack.push(50);
        testStack.push(55);
        testStack.display();

        cout << endl << "Popping the Top Element: ";
        testStack.pop();
        testStack.display();

        cout << endl << "Top Element of Stack : " << testStack.topElement()->data;
        cout << endl;
    }
    else {
        int choice;

        while (true) {
            cout << endl << "Press any Key to Continue...";
            cin.ignore();

            menu(choice);

            if (choice == 1) {
                double inputData;

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