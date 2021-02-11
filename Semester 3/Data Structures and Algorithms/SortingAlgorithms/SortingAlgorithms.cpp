#include "SortingAlgorithms.h"
#include <iostream>
#include <chrono>
#include <windows.h>

void SortingAlgorithms::selectionSort(int *array, int numberOfElements, bool visualize) {
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

    std::cout << std::endl << "Time taken by Selection Sort: " << time << " s" << std::endl;
}

void SortingAlgorithms::insertionSort(int *array, int numberOfElements, bool visualize) {
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

    std::cout << std::endl << "Time taken by Selection Sort: " << time << " s" << std::endl;
}

void SortingAlgorithms::algorithmVisualization(const int *array, int numberOfElements, const std::string& algorithm) {
    COORD topLeft = {0, 0};
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
    FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE, screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
    SetConsoleCursorPosition(console, topLeft);

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