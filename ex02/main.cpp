#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> intArray(5);

    std::cout << "intArray size: " << intArray.size() << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;

    Array<int> intArrayCopy = intArray;

    intArrayCopy[0] = 10;

    std::cout << "\nintArrayCopy size: " << intArrayCopy.size() << std::endl;
    for (unsigned int i = 0; i < intArrayCopy.size(); i++)
        std::cout << "intArrayCopy[" << i << "]: " << intArrayCopy[i] << std::endl;

    return 0;
}
