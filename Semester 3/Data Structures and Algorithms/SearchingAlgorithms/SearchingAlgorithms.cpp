#include "SearchingAlgorithms.h"
#include <iostream>
#include <chrono>
#include <windows.h>

bool SearchingAlgorithms::linearSearch(const int *array, int numberOfElements, int searchTerm) {
    clock_t timeStart, timeStop;

    timeStart = clock();

    for (int i = 0; i < numberOfElements; i++) {
        SearchingAlgorithms::visualizeLinearSearch(array, numberOfElements, i);

        if (array[i] == searchTerm) {
            timeStop = clock();

            double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

            std::cout << std::endl << "Time taken by Linear Search to find " << searchTerm << ": " << time << " s";
            std::cout << std::endl;

            return true;
        }
    }

    timeStop = clock();

    double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

    std::cout << std::endl << "Time taken by Linear Search: " << time << " s";
    std::cout << std::endl;

    return false;
}

int SearchingAlgorithms::ls_elementFrequency(const int *array, int numberOfElements, int searchTerm) {
    int frequency = 0;

    for (int i = 0; i < numberOfElements; i++) {
        if (array[i] == searchTerm) {
            frequency++;
        }
    }

    return frequency;
}

void SearchingAlgorithms::visualizeLinearSearch(const int *array, int numberOfElements, int currentIndex) {
    system("cls");

    for (int i = 0; i < numberOfElements; i++) {
        for (int j = 0; j < array[i]; j++) {
            if (i == currentIndex) {
                std::cout << "*";
            }
            else {
                std::cout << "=";
            }
        }

        std::cout << "O";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    Sleep(150);
}

bool SearchingAlgorithms::isArraySorted(const int* array, int numberOfElemets) {
    for (int i = 0; i < numberOfElemets; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }

    return true;
}

void SearchingAlgorithms::sortArray(int* array, int numberOfElements) {
    for (int i = 0; i < numberOfElements; i++) {
        for (int j = 0; j < numberOfElements; j++) {
            if (array[i] < array[j]) {
                std::swap(array[i], array[j]);
            }
        }
    }
}

bool SearchingAlgorithms::doBinarySearch(const int* array, int numberOfElements, int searchTerm) {
    clock_t timeStart, timeStop;

        timeStart = clock();

        int startIndex = 0;
        int endIndex = numberOfElements - 1;

        while (startIndex <= endIndex) {
            int midIndex = (startIndex + endIndex) / 2;

            SearchingAlgorithms::visualizeBinarySearch(array, numberOfElements, startIndex, midIndex, endIndex);

            if (array[midIndex] == searchTerm) {
                timeStop = clock();

                double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

                std::cout << std::endl << "Time taken by Binary Search to find " << searchTerm << ": " << time << " s";
                std::cout << std::endl;

                return true;
            }
            else if (searchTerm < array[midIndex]) {
                endIndex = midIndex - 1;
            }
            else {
                startIndex = midIndex + 1;
            }
        }

        timeStop = clock();

        double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

        std::cout << std::endl << "Time taken by Binary Search: " << time << " s";
        std::cout << std::endl;

        return false;
}

bool SearchingAlgorithms::binarySearch(int *array, int numberOfElements, int searchTerm) {
    bool isFound;

    if (SearchingAlgorithms::isArraySorted(array, numberOfElements)) {
        isFound = SearchingAlgorithms::doBinarySearch(array, numberOfElements, searchTerm);
    }
    else {
        std::cout << std::endl;
        std::cerr << std::endl << "Array is Unsorted, Array will be sorted for Binary Search";

        int temp[numberOfElements];

        for (int i = 0; i < numberOfElements; i++) {
            temp[i] = array[i];
        }

        SearchingAlgorithms::sortArray(array, numberOfElements);
        isFound = SearchingAlgorithms::doBinarySearch(array, numberOfElements, searchTerm);

        for (int i = 0; i < numberOfElements; i++) {
            array[i] = temp[i];
        }
    }

    return isFound;
}

int SearchingAlgorithms::bs_elementIndex(int *array, int numberOfElements, int searchTerm, bool isfirstIndex) {
    int startIndex = 0;
    int endIndex = numberOfElements - 1;
    int result = -1;

    while (startIndex <= endIndex) {
        int midIndex = (startIndex + endIndex) / 2;

        if (array[midIndex] == searchTerm) {
            result = midIndex;

            if (isfirstIndex) {
                endIndex = midIndex - 1;
            }
            else {
                startIndex = midIndex + 1;
            }
        }
        else if (searchTerm < array[midIndex]) {
            endIndex = midIndex - 1;
        }
        else {
            startIndex = midIndex + 1;
        }
    }

    return result;
}

int SearchingAlgorithms::do_bs_elementFrequency(int* array, int numberOfElements, int searchTerm) {
    int firstIndex = SearchingAlgorithms::bs_elementIndex(array, numberOfElements, searchTerm, true);

    if (firstIndex == -1) {
        return 0;
    }
    else {
        int lastIndex = SearchingAlgorithms::bs_elementIndex(array, numberOfElements, searchTerm, false);

        return (lastIndex - firstIndex) + 1;
    }
}

int SearchingAlgorithms::bs_elementFrequency(int *array, int numberOfElements, int searchTerm) {
    int frequency;

    if (SearchingAlgorithms::isArraySorted(array, numberOfElements)) {
        frequency = SearchingAlgorithms::do_bs_elementFrequency(array, numberOfElements, searchTerm);
    }
    else {
        std::cout << std::endl;
        std::cerr << std::endl << "Array is Unsorted, Array will be sorted for Binary Search";

        int temp[numberOfElements];

        for (int i = 0; i < numberOfElements; i++) {
            temp[i] = array[i];
        }

        SearchingAlgorithms::sortArray(array, numberOfElements);

        frequency = SearchingAlgorithms::do_bs_elementFrequency(array, numberOfElements, searchTerm);

        for (int i = 0; i < numberOfElements; i++) {
            array[i] = temp[i];
        }
    }

    return frequency;
}

int SearchingAlgorithms::do_bs_rotationNumbers(const int* array, int numberOfElements) {
    int startIndex = 0;
    int endIndex = numberOfElements - 1;

    while (startIndex <= endIndex) {
        int midIndex = (startIndex + endIndex) / 2;

        int midPlusOneIndex = (midIndex + 1);
        int midMinusOneIndex = (midIndex - 1);

        if (array[startIndex] < array[endIndex]) {
            return startIndex;
        }
        else if ((array[midIndex] <= array[midPlusOneIndex]) and (array[midIndex] <= array[midMinusOneIndex])) {
            return midIndex;
        }
        else if (array[midIndex] <= array[endIndex]) {
            endIndex = midIndex - 1;
        }
        else if (array[midIndex] >= array[startIndex]) {
            startIndex = midIndex + 1;
        }
    }

    return -1;
}

int SearchingAlgorithms::bs_rotationNumbers(int *array, int numberOfElements) {
    int numberOfRotations;

    if (SearchingAlgorithms::isArraySorted(array, numberOfElements)) {
        numberOfRotations = SearchingAlgorithms::do_bs_rotationNumbers(array, numberOfElements);
    }
    else {
        std::cout << std::endl;
        std::cerr << std::endl << "Array is Unsorted, Array will be sorted for Binary Search";

        int temp[numberOfElements];

        for (int i = 0; i < numberOfElements; i++) {
            temp[i] = array[i];
        }

        SearchingAlgorithms::sortArray(array, numberOfElements);

        numberOfRotations = SearchingAlgorithms::do_bs_rotationNumbers(array, numberOfElements);

        for (int i = 0; i < numberOfElements; i++) {
            array[i] = temp[i];
        }
    }

    return numberOfRotations;
}

void SearchingAlgorithms::visualizeBinarySearch(const int *array, int numberOfElements, int startIndex, int midIndex, int endIndex) {
    system("cls");

    for (int i = 0; i < numberOfElements; i++) {
        for (int j = 0; j < array[i]; j++) {
            if (i == startIndex) {
                std::cout << ">";
            }
            else if (i == midIndex) {
                std::cout << "*";
            }
            else if (i == endIndex) {
                std::cout << "<";
            }
            else {
                std::cout << "=";
            }
        }

        std::cout << "O";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    Sleep(150);
}