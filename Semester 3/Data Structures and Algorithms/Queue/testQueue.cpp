#include <iostream>
#include "Queue.h"

using namespace std;

void menu(int& choice);

int main() {
    Queue testQueue;

    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'M' and testType != 'm') {
        testQueue.enQueue('A');
        testQueue.enQueue('B');
        testQueue.enQueue('C');
        testQueue.enQueue('D');
        testQueue.enQueue('E');

        cout << endl << "Elments of Queue are:";
        testQueue.display();

        cout << endl << "Dequeue 1 time";
        testQueue.deQueue();

        cout << endl << "Elments of Queue are:";
        testQueue.display();

        cout << endl << "Front Element:" << testQueue.frontElementData();

        cout << endl << endl << "Dequeue 3 times";
        testQueue.deQueue();
        testQueue.deQueue();
        testQueue.deQueue();

        cout << endl << "Elments of Queue are:";
        testQueue.display();

        cout << endl << "Is Queue Empty? (" << ((testQueue.isEmpty())? ("True") : ("False")) << ")";

        cout << endl << endl << "Dequeue Last Element";
        testQueue.deQueue();
        cout << endl << "Is Queue Empty? (" << ((testQueue.isEmpty())? ("True") : ("False")) << ")";
        cout << endl << "Elments of Queue are:";
        testQueue.display();
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

                testQueue.enQueue(inputData);
                cout << endl << "Element was added" << endl;
            }
            else if (choice == 2) {
                testQueue.deQueue();
                cout << endl << "Element was Removed" << endl;
            }
            else if (choice == 3) {
                cout << endl << "Top Element in Queue: " << testQueue.frontElementData();
                cout << endl;
            }
            else if (choice == 4) {
                testQueue.display();
            }
            else if (choice == 5) {
                if (testQueue.isEmpty()) {
                    cout << endl << "Queue is Empty";
                }
                else {
                    cout << endl << "Queue is not Empty";
                }
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
    cout << endl << "1) Enqueue Element";
    cout << endl << "2) Dequeue Element";
    cout << endl << "3) Front Element";
    cout << endl << "4) Display Queue";
    cout << endl << "5) Is Queue Empty";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}