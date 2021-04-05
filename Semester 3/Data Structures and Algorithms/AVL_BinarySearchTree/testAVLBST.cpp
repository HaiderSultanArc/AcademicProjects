#include <iostream>
#include "AVL_BST.h"

using namespace std;

void menu(int &choice);

int main() {
    AVL_BST testAVLBST;

    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'm' and testType != 'M') {
        cout << endl << "Inserting 50 30 80 20 40 69 90 100 to Construct an AVL BST";
        testAVLBST.insertData(50);
        testAVLBST.insertData(30);
        testAVLBST.insertData(80);
        testAVLBST.insertData(20);
        testAVLBST.insertData(40);
        testAVLBST.insertData(60);
        testAVLBST.insertData(90);
        testAVLBST.insertData(100);

        cout << endl << "Depth of AVL BST: " << testAVLBST.getDepth();
        cout << endl << "Pre-Order Traversal:";
        testAVLBST.preOrderTraversal();
        cout << endl << "In-Order Traversal:";
        testAVLBST.inOrderTraversal();
        cout << endl << "Post-Order Traversal:";
        testAVLBST.postOrderTraversal();
        cout << endl << "Level-Order Traversal:";
        testAVLBST.levelOrderTraversal();

        cout << endl << "Minimum Data in AVL BST: " << testAVLBST.minData()->data;
        cout << endl << "Maximum Data in AVL BST: " << testAVLBST.maxData()->data;

        cout << endl << "Searching 40 in the AVL BST...";

        if (testAVLBST.searchData(40) != nullptr) {
            cout << endl << "40 was found in the AVL BST" << endl;
        }
        else {
            cout << endl << "40 was found in the AVL BST" << endl;
        }

        cout << endl << "Deleting Value 40";
        testAVLBST.deleteData(40);

        cout << endl << "Tree after Deleting Value 40";
        cout << endl << "Depth of AVL BST: " << testAVLBST.getDepth();
        cout << endl << "Pre-Order Traversal:";
        testAVLBST.preOrderTraversal();
        cout << endl << "In-Order Traversal:";
        testAVLBST.inOrderTraversal();
        cout << endl << "Post-Order Traversal:";
        testAVLBST.postOrderTraversal();
        cout << endl << "Level-Order Traversal:";
        testAVLBST.levelOrderTraversal();
    }
    else {
        int choice = -1;

        while (choice != 0) {
            menu(choice);

            if (choice == 1) {
                int inputData;

                cout << endl << "Enter Input Value: ";
                cin >> inputData;

                testAVLBST.insertData(inputData);
            }
            else if (choice == 2) {
                int searchData;

                cout << endl << "Enter Value to Search: ";
                cin >> searchData;

                testAVLBST.searchData(searchData);
            }
            else if (choice == 3) {
                int deleteData;

                cout << endl << "Enter Value to Delete: ";
                cin >> deleteData;

                testAVLBST.deleteData(deleteData);
            }
            else if (choice == 4) {
                cout << endl << "Pre-Order Traversal: " << endl;
                testAVLBST.preOrderTraversal();
            }
            else if (choice == 5) {
                cout << endl << "In-Order Traversal: " << endl;
                testAVLBST.inOrderTraversal();
            }
            else if (choice == 6) {
                cout << endl << "Post-Order Traversal: " << endl;
                testAVLBST.postOrderTraversal();
            }
            else if (choice == 7) {
                cout << endl << "Level-Order Traversal: " << endl;
                testAVLBST.levelOrderTraversal();
            }
            else if (choice == 8) {
                cout << endl << "Depth of AVL BST: " << testAVLBST.getDepth();
            }
            else if (choice == 9) {
                cout << endl << "Minumum Data in AVL BST: " << testAVLBST.minData()->data;
            }
            else if (choice == 10) {
                cout << endl << "Maximum Data in AVL BST: " << testAVLBST.maxData()->data;
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
    cout << endl << "8) Get Depth";
    cout << endl << "9) Min Data";
    cout << endl << "10) Max Data";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}