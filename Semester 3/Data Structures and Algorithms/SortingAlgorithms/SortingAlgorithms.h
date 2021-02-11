#ifndef DSA_SORTINGALGORITHMS_H
#define DSA_SORTINGALGORITHMS_H

#include <string>

class SortingAlgorithms {
public:
    static void selectionSort(int *array, int numberOfElements, bool visualize=false);
    static void bubbleSort(int *array, int numberOfElements, bool visualize=false);
    static void insertionSort(int *array, int numberOfElements, bool visualize=false);

private:
    static void algorithmVisualization(const int *array, int numberOfElements, const std::string& algorithm);
};


#endif //DSA_SORTINGALGORITHMS_H
