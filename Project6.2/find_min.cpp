#include "find_min.h"
#include <stdexcept>

template <typename T>
T find_min(T* array, int size) {
    if (size == 0) {
        throw std::runtime_error("Array is empty");
    }

    T min_value = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }
    return min_value;
}

// Явна інстанціація шаблону для типів int і float
template int find_min<int>(int*, int);
template float find_min<float>(float*, int);
