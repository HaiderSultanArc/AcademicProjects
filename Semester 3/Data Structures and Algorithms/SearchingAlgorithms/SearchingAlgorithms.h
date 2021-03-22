#ifndef DSA_SEARCHINGALGORITHMS_H
#define DSA_SEARCHINGALGORITHMS_H

class SearchingAlgorithms {
public:
    static bool linearSearch(const int *array, int numberOfElements, int searchTerm);
    static int ls_elementFrequency(const int *array, int numberOfElements, int searchTerm);
    static bool binarySearch(const int *sortedArray, int numberOfElements, int searchTerm);
    static int bs_elementFrequency(const int *sortedArray, int numberOfElements, int searchTerm);
    static int bs_rotationNumbers(const int *sortedArray, int numberOfElements);

private:
    static void visualizeLinearSearch(const int *array, int numberOfElements, int currentIndex);
    static void visualizeBinarySearch(const int *sortedArray, int numberOfElements, int startIndex, int midIndex, int endIndex);
    static int bs_elementIndex(const int *sortedArray, int numberOfElements, int searchTerm, bool isfirstIndex);
};


#endif //DSA_SEARCHINGALGORITHMS_H
