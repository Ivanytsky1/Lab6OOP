#include "Transformer.h"

template <typename T>
T Transformer<T>::transform(T value) {
    return static_cast<T>(value * static_cast<T>(2));
}

template class Transformer<int>;
template class Transformer<float>;
template class Transformer<long>;
