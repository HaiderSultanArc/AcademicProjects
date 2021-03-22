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

bool SearchingAlgorithms::binarySearch(const int *sortedArray, int numberOfElements, int searchTerm) {
    clock_t timeStart, timeStop;

    timeStart = clock();

    int startIndex = 0;
    int endIndex = numberOfElements - 1;

    while (startIndex <= endIndex) {
        int midIndex = (startIndex + endIndex) / 2;

        SearchingAlgorithms::visualizeBinarySearch(sortedArray, numberOfElements, startIndex, midIndex, endIndex);

        if (sortedArray[midIndex] == searchTerm) {
            timeStop = clock();

            double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

            std::cout << std::endl << "Time taken by Binary Search to find " << searchTerm << ": " << time << " s";
            std::cout << std::endl;

            return true;
        }
        else if (searchTerm < sortedArray[midIndex]) {
            endIndex = midIndex - 1;
        }
        else {
            startIndex = midIndex + 1;
        }
    }

    timeStop = clock();

    double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

    std::cout << std::endl << "Time taken by Linear Search: " << time << " s";
    std::cout << std::endl;

    return false;
}

int SearchingAlgorithms::bs_elementIndex(const int *sortedArray, int numberOfElements, int searchTerm, bool isfirstIndex) {
    int startIndex = 0;
    int endIndex = numberOfElements - 1;
    int result = -1;

    while (startIndex <= endIndex) {
        int midIndex = (startIndex + endIndex) / 2;

        if (sortedArray[midIndex] == searchTerm) {
            result = midIndex;

            if (isfirstIndex) {
                endIndex = midIndex - 1;
            }
            else {
                startIndex = midIndex + 1;
            }
        }
        else if (searchTerm < sortedArray[midIndex]) {
            endIndex = midIndex - 1;
        }
        else {
            startIndex = midIndex + 1;
        }
    }

    return result;
}

int SearchingAlgorithms::bs_elementFrequency(const int *sortedArray, int numberOfElements, int searchTerm) {
    int firstIndex = SearchingAlgorithms::bs_elementIndex(sortedArray, numberOfElements, searchTerm, true);

    if (firstIndex == -1) {
        return 0;
    }
    else {
        int lastIndex = SearchingAlgorithms::bs_elementIndex(sortedArray, numberOfElements, searchTerm, false);

        return (lastIndex - firstIndex) + 1;
    }
}

void SearchingAlgorithms::visualizeBinarySearch(const int *sortedArray, int numberOfElements, int startIndex, int midIndex, int endIndex) {
    system("cls");

    for (int i = 0; i < numberOfElements; i++) {
        for (int j = 0; j < sortedArray[i]; j++) {
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

int SearchingAlgorithms::bs_rotationNumbers(const int *sortedArray, int numberOfElements) {
    int startIndex = 0;
    int endIndex = numberOfElements - 1;

    while (startIndex <= endIndex) {
        int midIndex = (startIndex + endIndex) / 2;

        int midPlusOneIndex = (midIndex + 1);
        int midMinusOneIndex = (midIndex - 1);

        if (sortedArray[startIndex] < sortedArray[endIndex]) {
            return startIndex;
        }
        else if ((sortedArray[midIndex] <= sortedArray[midPlusOneIndex]) and (sortedArray[midIndex] <= sortedArray[midMinusOneIndex])) {
            return midIndex;
        }
        else if (sortedArray[midIndex] <= sortedArray[endIndex]) {
            endIndex = midIndex - 1;
        }
        else if (sortedArray[midIndex] >= sortedArray[startIndex]) {
            startIndex = midIndex + 1;
        }
    }

    return -1;
}