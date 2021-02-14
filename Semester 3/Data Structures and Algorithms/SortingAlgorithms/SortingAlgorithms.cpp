#include "SortingAlgorithms.h"
#include <iostream>
#include <chrono>
#include <windows.h>

bool checkLargestToVisualize(const int* array, int numberOfElements) {
    int largestNumber = array[0];

    for (int i = 0; i < numberOfElements; i++) {
        if (array[i] > largestNumber) {
            largestNumber = array[i];
        }
    }

    if (largestNumber > 100) {
        std::cerr << std::endl << "Largest Element is More than 100, can't Visualize Sorting Algorithm" << std::endl;
        return false;
    }
    else {
        return true;
    }
}

void SortingAlgorithms::selectionSort(int *array, int numberOfElements, bool visualize) {
    if (visualize) {
        visualize = checkLargestToVisualize(array, numberOfElements);
    }

    clock_t timeStart, timeStop;
    timeStart = clock();

    for (int i = 0; i < numberOfElements; i++) {
        for (int j = 0; j < numberOfElements; j++) {
            if (array[i] < array[j]) {
                std::swap(array[i], array[j]);

                if (visualize) {
                    SortingAlgorithms::algorithmVisualization(array, numberOfElements, "Selection Sort");
                }
            }
        }
    }

    timeStop = clock();
    double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

    std::cout << std::endl << "Time taken by Selection Sort: " << time << " s" << std::endl;
}

void SortingAlgorithms::bubbleSort(int *array, int numberOfElements, bool visualize) {
    if (visualize) {
        visualize = checkLargestToVisualize(array, numberOfElements);
    }

    clock_t timeStart, timeStop;
    timeStart = clock();

    for (int i = 0; i < numberOfElements; i++) {
        bool isSwaped = false;

        for (int j = 0; j < numberOfElements - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                isSwaped = true;

                if (visualize) {
                    SortingAlgorithms::algorithmVisualization(array, numberOfElements, "Bubble Sort");
                }
            }
        }

        if (not(isSwaped)) {
            break;
        }
    }

    timeStop = clock();
    double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

    std::cout << std::endl << "Time taken by Bubble Sort: " << time << " s" << std::endl;
}

void SortingAlgorithms::insertionSort(int *array, int numberOfElements, bool visualize) {
    if (visualize) {
        visualize = checkLargestToVisualize(array, numberOfElements);
    }

    clock_t timeStart, timeStop;
    timeStart = clock();

    for (int i = 0; i < numberOfElements; i++) {
        int value = array[i];
        int index = i;

        while (index > 0 and (array[index - 1] > value)) {
            array[index] = array[index - 1];
            index--;

            if (visualize) {
                SortingAlgorithms::algorithmVisualization(array, numberOfElements, "Insertion Sort");
            }
        }

        array[index] = value;

        if (visualize) {
            SortingAlgorithms::algorithmVisualization(array, numberOfElements, "Insertion Sort");
        }
    }

    timeStop = clock();
    double time = double(timeStop - timeStart) / double(CLOCKS_PER_SEC);

    std::cout << std::endl << "Time taken by Insertion Sort: " << time << " s" << std::endl;
}

void SortingAlgorithms::algorithmVisualization(const int *array, int numberOfElements, const std::string& algorithm) {
    system("cls");
    std::cout << std::endl << "Visualization of " << algorithm << ":" << std::endl << std::endl;

    for (int i = 0; i < numberOfElements; i++) {
        for (int j = 0; j < array[i]; j++) {
            std::cout << "=";
        }

        std::cout << "O" << std::endl;
    }

    std::cout << std::endl;
    Sleep(150);
}