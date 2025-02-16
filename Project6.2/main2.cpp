#include <iostream>
#include "Transformer.h"

using namespace std;

template <typename T>
class Transformer {
public:
    T transform(T value) {
        return static_cast<T>(value* static_cast<T>(2));
    }
};

int main() {
    Transformer<int> intTransformer;
    Transformer<float> floatTransformer;
    Transformer<long> longTransformer;
    
    int intValue = 5;
    float floatValue = 3.14f;
    long longValue = 1234567890;
    
    int transformedInt = intTransformer.transform(intValue);
    float transformedFloat = floatTransformer.transform(floatValue);
    long transformedLong = longTransformer.transform(longValue);
    
    cout << "Transformed int: " << transformedInt << endl;
    cout << "Transformed float: " << transformedFloat << endl;
    cout << "Transformed long: " << transformedLong << endl;
    
    return 0;
}
