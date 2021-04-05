#ifndef DSA_SEARCHINGALGORITHMS_H
#define DSA_SEARCHINGALGORITHMS_H

class SearchingAlgorithms {
public:
    static bool linearSearch(const int* array, int numberOfElements, int searchTerm);
    static int ls_elementFrequency(const int* array, int numberOfElements, int searchTerm);
    static bool binarySearch(int* array, int numberOfElements, int searchTerm);
    static int bs_elementFrequency(int* array, int numberOfElements, int searchTerm);
    static int bs_rotationNumbers(int* array, int numberOfElements);

private:
    static bool doBinarySearch(const int* array, int numberOfElements, int searchTerm);
    static void visualizeLinearSearch(const int* array, int numberOfElements, int currentIndex);
    static void visualizeBinarySearch(const int* array, int numberOfElements, int startIndex, int midIndex, int endIndex);
    static int do_bs_elementFrequency(int* array, int numberOfElements, int searchTerm);
    static int bs_elementIndex(int* array, int numberOfElements, int searchTerm, bool isFirstIndex);
    static int do_bs_rotationNumbers(const int* array, int numberOfElements);
    static bool isArraySorted(const int* array, int numberOfElemets);
    static void sortArray(int* array, int numberOfElements);
};


#endif //DSA_SEARCHINGALGORITHMS_H
