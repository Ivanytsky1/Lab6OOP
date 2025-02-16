#include "binary_search.h"

template <typename T>
int binary_search(T* array, int size, T value) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (array[middle] == value) {
            return middle;
        } else if (array[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

// Явна інстанціація шаблону для типів int і float
template int binary_search<int>(int*, int, int);
template float binary_search<float>(float*, int, float);
