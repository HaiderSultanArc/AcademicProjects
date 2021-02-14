#include <iostream>
#include "SortingAlgorithms.h"

using namespace std;

void menu(int &choice);

int main() {
    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'm' and testType != 'M') {
        for (int algorithm = 3; algorithm < 4; algorithm++) {
            system("cls");

            int array[10] = {17, 3, 15, 13, 9, 19, 7, 5, 1, 11};

            cout << endl << "Array: {";

            for (int i : array) {
                cout << i << ", ";
            }

            cout << "\b\b}" << endl << endl;
            system("pause");

            if (algorithm == 0) {
                SortingAlgorithms::selectionSort(array, 10, true);
            }
            else if (algorithm == 1) {
                SortingAlgorithms::bubbleSort(array, 10, true);
            }
            else if (algorithm == 2) {
                SortingAlgorithms::insertionSort(array, 10, true);
            }
            else if (algorithm == 3) {
                SortingAlgorithms::mergeSort(array, 10, true);
            }

            cout << endl << "Array after Sorting: {";

            for (int i : array) {
                cout << i << ", ";
            }

            cout << "\b\b}" << endl << endl;
            system("pause");
        }
    }
    else {
        int sizeOfArray;

        cout << endl << "Enter Size of Array: ";
        cin >> sizeOfArray;

        int array[sizeOfArray];

        int choice = -1;

        while (choice != 0) {
            bool isSorted = false;
            menu(choice);

            if (choice == 1) {
                SortingAlgorithms::selectionSort(array, sizeOfArray, true);
                isSorted = true;
            }
            else if (choice == 2) {
                SortingAlgorithms::bubbleSort(array, sizeOfArray, true);
                isSorted = true;
            }
            else if (choice == 3) {
                SortingAlgorithms::insertionSort(array, sizeOfArray, true);
                isSorted = true;
            }
            else if (choice == 4) {
                SortingAlgorithms::mergeSort(array, sizeOfArray);
                isSorted = true;
            }
            else if (choice == 5) {
                cout << endl << "Enter Elements of Array: " << endl;

                for (int i = 0; i < sizeOfArray; i++) {
                    cout << endl << "Array[" << i << "]: ";
                    cin >> array[i];
                }

                isSorted = false;
            }
            else if (choice == 0) {
                break;
            }
            else {
                cerr << endl << "Not an Option!" << endl;
            }

            cout << endl << ((isSorted) ? ("Array after Sorting: {") : ("Array: {"));

            for (int i = 0; i < sizeOfArray; i++) {
                cout << array[i] << ", ";
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
    cout << endl << "1) Selection Sort";
    cout << endl << "2) Bubble Sort";
    cout << endl << "3) Insertion Sort";
    cout << endl << "4) Merge Sort";
    cout << endl << "5) Input Array";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}