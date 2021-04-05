#include <iostream>
#include <deque>
#include "BinarySearchTree.h"

using namespace std;

void menu(int &choice);

int main() {
    BinarySearchTree testBST;

    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'm' and testType != 'M') {
        cout << endl << "Inserting 50 30 80 20 40 69 90 100 to Construct a BST";
        testBST.insertData(50);
        testBST.insertData(30);
        testBST.insertData(80);
        testBST.insertData(20);
        testBST.insertData(40);
        testBST.insertData(60);
        testBST.insertData(90);
        testBST.insertData(100);

        cout << endl << "Depth of BST: " << testBST.getDepth();
        cout << endl << "Pre-Order Traversal:";
        testBST.preOrderTraversal();
        cout << endl << "In-Order Traversal:";
        testBST.inOrderTraversal();
        cout << endl << "Post-Order Traversal:";
        testBST.postOrderTraversal();
        cout << endl << "Level-Order Traversal:";
        testBST.levelOrderTraversal();

        cout << endl << "Minimum Data in BST: " << testBST.minData()->data;
        cout << endl << "Maximum Data in BST: " << testBST.maxData()->data;

        cout << endl << "Searching 40 in the BST...";

        if (testBST.searchData(40) != nullptr) {
            cout << endl << "40 was found in the BST" << endl;
        }
        else {
            cout << endl << "40 was found in the BST" << endl;
        }

        cout << endl << "Successor to 60 is: " << testBST.getSuccessor(60)->data;

        cout << endl << "Deleting Value 40";
        testBST.deleteData(40);

        cout << endl << "Tree after Deleting Value 40";
        cout << endl << "Depth of BST: " << testBST.getDepth();
        cout << endl << "Pre-Order Traversal:";
        testBST.preOrderTraversal();
        cout << endl << "In-Order Traversal:";
        testBST.inOrderTraversal();
        cout << endl << "Post-Order Traversal:";
        testBST.postOrderTraversal();
        cout << endl << "Level-Order Traversal:";
        testBST.levelOrderTraversal();
    }
    else {
        int choice = -1;

        while (choice != 0) {
            menu(choice);

            if (choice == 1) {
                int inputData;

                cout << endl << "Enter Input Value: ";
                cin >> inputData;

                testBST.insertData(inputData);
            }
            else if (choice == 2) {
                int searchData;

                cout << endl << "Enter Value to Search: ";
                cin >> searchData;

                testBST.searchData(searchData);
            }
            else if (choice == 3) {
                int deleteData;

                cout << endl << "Enter Value to Delete: ";
                cin >> deleteData;

                testBST.deleteData(deleteData);
            }
            else if (choice == 4) {
                cout << endl << "Pre-Order Traversal: " << endl;
                testBST.preOrderTraversal();
            }
            else if (choice == 5) {
                cout << endl << "In-Order Traversal: " << endl;
                testBST.inOrderTraversal();
            }
            else if (choice == 6) {
                cout << endl << "Post-Order Traversal: " << endl;
                testBST.postOrderTraversal();
            }
            else if (choice == 7) {
                cout << endl << "Level-Order Traversal: " << endl;
                testBST.levelOrderTraversal();
            }
            else if (choice == 8) {
                deque<Leaf*> leavesInOrder;
                leavesInOrder = testBST.getLeavesInOrder();

                cout << endl << "Leaves in Order are: ";

                for (int i = 0; i < leavesInOrder.size(); i++) {
                    cout << leavesInOrder.front();
                    leavesInOrder.pop_front();
                }
            }
            else if (choice == 9) {
                int queryData;

                cout << endl << "Enter Data to find it's Successor: ";
                cin >> queryData;

                cout << "Successor of " << queryData << " is " << testBST.getSuccessor(queryData)->data;
            }
            else if (choice == 10) {
                cout << endl << "Depth of BST: " << testBST.getDepth();
            }
            else if (choice == 11) {
                cout << endl << "Minumum Data in BST: " << testBST.minData()->data;
            }
            else if (choice == 12) {
                cout << endl << "Maximum Data in BST: " << testBST.maxData()->data;
            }
            else if (choice == 0) {
                break;
            }
            else {
                cerr << endl << "Not an Option!" << endl;
            }

            cout << "\b\b}" << endl;
        }
    }

    cout << endl << endl;
    system("pause");
}

void menu(int &choice) {
    if (cin.peek() == '\n') {
        cin.ignore();
    }

    cout << endl << endl;
    system("pause");
    system("cls");

    cout << endl << endl;
    cout << "Enter the Option Number from Following: ";
    cout << endl << "1)  Insert Data";
    cout << endl << "2)  Search Data";
    cout << endl << "3)  Delete Data";
    cout << endl << "4)  Pre-Order Traversal";
    cout << endl << "5)  In-Order Traversal";
    cout << endl << "6)  Post-Order Traversal";
    cout << endl << "7)  Level-Order Traversal";
    cout << endl << "8)  Get Leaves in Order";
    cout << endl << "9) Get Successor";
    cout << endl << "10) Get Depth";
    cout << endl << "11) Min Data";
    cout << endl << "12) Max Data";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}