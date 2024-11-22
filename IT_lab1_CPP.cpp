#include <iostream>

int main()
{
    int i = 69;
    int number = 72;
    
    i += number;

    int array[3] = {};

    int* iPointer = &i;

    number = *iPointer;

    *iPointer = 15;

    iPointer = &array[0];

    iPointer += 2;

    array[0] = 5;
    *iPointer = 6;

    std::cout << array[0] << std::endl << *iPointer;

    return 0;
}