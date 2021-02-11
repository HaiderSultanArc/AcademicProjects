#include <iostream>
#include "SortingAlgorithms.h"

using namespace std;

int main() {
    const int sizeOfArray = 10;
    int array[sizeOfArray] = {7, 3, 9, 8, 4, 10, 2, 1, 6, 5};

    SortingAlgorithms::selectionSort(array, sizeOfArray, true);
    SortingAlgorithms::bubbleSort(array, sizeOfArray, true);
    SortingAlgorithms::insertionSort(array, sizeOfArray, true);

    cout << endl << "Array after Sorting:-" << endl;

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << std::endl << "array[" << i << "]: " << array[i];
    }
}