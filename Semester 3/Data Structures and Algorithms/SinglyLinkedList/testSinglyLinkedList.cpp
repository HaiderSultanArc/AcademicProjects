#include <iostream>
#include "DataStructures.h"

using namespace std;

void menu(int &choice);

int main() {
    SinglyLinkedList testSinglyLinkedList;

    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'M' and testType != 'm') {
        cout << endl << "Creating Linked List: ";
        testSinglyLinkedList.addNode(10);
        testSinglyLinkedList.addNode(20);
        testSinglyLinkedList.addNode(30);
        testSinglyLinkedList.addNode(40);
        testSinglyLinkedList.addNode(50);
        testSinglyLinkedList.display();

        cout << endl << "Inserting Nodes: ";
        testSinglyLinkedList.insertNode(1, 15);
        testSinglyLinkedList.insertNode(3, 25);
        testSinglyLinkedList.insertNode(5, 35);
        testSinglyLinkedList.insertNode(7, 45);
        testSinglyLinkedList.display();

        cout << endl << "Adding a New Node: ";
        testSinglyLinkedList.addNode(60);
        testSinglyLinkedList.display();

        cout << endl << "Updating last Node: ";
        testSinglyLinkedList.updateNode(9, 55);
        testSinglyLinkedList.display();

        cout << endl << "Searching Node: ";
        testSinglyLinkedList.searchNode(55);
        testSinglyLinkedList.display();

        cout << endl << "Deleting Last Node: ";
        testSinglyLinkedList.deleteNode(9);
        testSinglyLinkedList.display();

        cout << endl << "Adding New Head: ";
        testSinglyLinkedList.changeHead(0);
        testSinglyLinkedList.display();
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

                testSinglyLinkedList.addNode(inputData);
            }
            else if (choice == 2) {
                int nodeNumber;
                double inputData;

                cout << endl << "Enter Node Number you want your Data to be in the List: ";
                cin >> nodeNumber;
                cout << endl << "Enter Data you want to Insert: ";
                cin >> inputData;

                testSinglyLinkedList.insertNode(nodeNumber, inputData);
            }
            else if (choice == 3) {
                int nodeNumber;
                double updateData;

                cout << endl << "Enter Node Number of which you want to Update Data: ";
                cin >> nodeNumber;
                cout << endl << "Enter Update Data: ";
                cin >> updateData;

                testSinglyLinkedList.updateNode(nodeNumber, updateData);
            }
            else if (choice == 4) {
                int nodeNumber;

                cout << endl << "Enter Node Number you want to Delete: ";
                cin >> nodeNumber;

                testSinglyLinkedList.deleteNode(nodeNumber);
            }
            else if (choice == 5) {
                double searchData;

                cout << endl << "Enter Data you want to Search: ";
                cin >> searchData;

                testSinglyLinkedList.searchNode(searchData);
            }
            else if (choice == 6) {
                double headData;

                cout << endl << "Enter New Head Data: ";
                cin >> headData;

                testSinglyLinkedList.changeHead(headData);
            }
            else if (choice == 7) {
                testSinglyLinkedList.display();
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
    cout << endl << "1) Add Node";
    cout << endl << "2) Insert Node";
    cout << endl << "3) Update Node";
    cout << endl << "4) Delete Node";
    cout << endl << "5) Search Node";
    cout << endl << "6) Change Head";
    cout << endl << "7) Display List";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}