#ifndef TRANSFORMER_H
#define TRANSFORMER_H

template <typename T>
class Transformer {
public:
    T transform(T value);
};

#include "Transformer.cpp" // Включаємо реалізацію шаблону

#endif // TRANSFORMER_H
