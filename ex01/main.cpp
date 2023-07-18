#include <iostream>
#include "iter.hpp"

template <typename T>
void doubleElement(T& element)
{
    element *= 2;
}

int main(void)
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(int);

    std::cout << "intArray before iter: ";
    for (size_t i = 0; i < intArrayLength; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    iter(intArray, intArrayLength, doubleElement<int>);

    std::cout << "intArray after iter: ";
    for (size_t i = 0; i < intArrayLength; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
