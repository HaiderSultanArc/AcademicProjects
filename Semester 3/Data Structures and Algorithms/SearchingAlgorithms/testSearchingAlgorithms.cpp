#include <iostream>
#include "SearchingAlgorithms.h"

using namespace std;

void menu(int& choice);
void displayArray(int* array, int size);

int main() {
    cout << endl << "Do you want an Auto Test or Manual Test (Press M for Auto or any other key for Auto): ";
    char testType;
    testType = char(getchar());

    if (testType != 'M' and testType != 'm') {
        int array[10] = {1, 2, 3, 3, 3, 4, 5, 6, 8, 9};

        displayArray(array, 10);

        cout << endl << endl << "Linear Search 6";
        SearchingAlgorithms::linearSearch(array, 10, 6);

        cout << endl << endl << "Binary Search 6";
        SearchingAlgorithms::binarySearch(array, 10, 6);

        cout << endl << endl << "Linear Search Frequency of 3";
        SearchingAlgorithms::ls_elementFrequency(array, 10, 3);

        cout << endl << endl << "Binary Search Frequency of 3";
        SearchingAlgorithms::bs_elementFrequency(array, 10, 3);
    }
    else {
        int choice;

        int* array;
        int size;

        while (true) {
            cout << endl << "Press any Key to Continue...";
            cin.ignore();

            menu(choice);

            if (choice == 1) {
                cout << endl;
                cout << endl << "Enter Size of Array: ";
                cin >> size;

                array = new int[size];

                cout << endl << "Enter Elements:" << endl;

                for (int i = 0; i < size; i++) {
                    cout << endl << "array[" <<  i << "]: ";
                    cin >> array[i];
                }
            }
            else if (choice == 2) {
                int searchElement;

                cout << endl;
                cout << endl << "Enter Element to Search: ";
                cin >> searchElement;

                if (SearchingAlgorithms::linearSearch(array, size, searchElement)) {
                    cout << endl << searchElement << " was Found in the Array";
                }
                else {
                    cout << endl << searchElement << " was not Found in the Array";
                }
            }
            else if (choice == 3) {
                int searchElement;

                cout << endl;
                cout << endl << "Enter Element to Search: ";
                cin >> searchElement;

                if (SearchingAlgorithms::binarySearch(array, size, searchElement)) {
                    cout << endl << searchElement << " was Found in the Array";
                }
                else {
                    cout << endl << searchElement << " was not Found in the Array";
                }
            }
            else if (choice == 4) {
                int searchElement;
                int frequency;

                cout << endl;
                cout << endl << "Enter Element to find its Frequence: ";
                cin >> searchElement;

                frequency = SearchingAlgorithms::ls_elementFrequency(array, size, searchElement);
                cout << endl << searchElement << " appeared " << frequency << " times in the Array";
            }
            else if (choice == 5) {
                int searchElement;
                int frequency;

                cout << endl;
                cout << endl << "Enter Element to find its Frequence: ";
                cin >> searchElement;

                frequency = SearchingAlgorithms::bs_elementFrequency(array, size, searchElement);
                cout << endl << searchElement << " appeared " << frequency << " times in the Array";
            }
            else if (choice == 6) {
                cout << endl;
                cout << endl << "Array was rotated " << SearchingAlgorithms::bs_rotationNumbers(array, size) << " times";
            }
            else if (choice == 7) {
                displayArray(array, size);
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
    cout << endl << "1) Input Array";
    cout << endl << "2) Linear Search Element";
    cout << endl << "3) Binary Search Element";
    cout << endl << "4) Linear Search Element Frequency";
    cout << endl << "5) Binary Search Element Frequency";
    cout << endl << "6) Binary Search Number of Rotations";
    cout << endl << "7) Display Array";
    cout << endl << "0) Exit";
    cout << endl << endl << "Your Choice: ";
    cin >> choice;
}

void displayArray(int* array, int size) {
    cout << endl << endl << "Array: {";

    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }

    cout << "\b\b}";
}