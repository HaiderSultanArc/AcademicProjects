#ifndef DSA_SORTINGALGORITHMS_H
#define DSA_SORTINGALGORITHMS_H

#include <string>

class SortingAlgorithms {
public:
    static void selectionSort(int *array, int numberOfElements, bool visualize=false);
    static void bubbleSort(int *array, int numberOfElements, bool visualize=false);
    static void insertionSort(int *array, int numberOfElements, bool visualize=false);
    static void mergeSort(int *array, int numberOfElements, bool visualize=false);

private:
    static void merge(const int *leftPart, int leftElements, const int *rightPart, int rightElements, int *array, bool visualize);
    static void algorithmVisualization(const int *array, int numberOfElements, const std::string& algorithm);
};


#endif //DSA_SORTINGALGORITHMS_H
