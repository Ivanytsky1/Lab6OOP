#include <iostream>
#include <string>
using namespace std;

// Загальний шаблон для чисел
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Повна спеціалізація шаблонної функції для char (конкатенація в string)
template <>
string add<char>(char a, char b) {
    return string(1, a) + string(1, b);
}

int main() {
    // Додавання int
    int intResult = add(5, 10);
    cout << "Sum of ints: " << intResult << endl;

    // Додавання float
    float floatResult = add(3.5f, 2.5f);
    cout << "Sum of floats: " << floatResult << endl;

    // Конкатенація char (A + B → "AB")
    string charResult = add<char>('A', 'B'); // Викликаємо спеціалізовану функцію
    cout << "Concatenation of chars: " << charResult << endl;

    return 0;
}
