#include <string.h>
#include <iostream>

struct TwoInts
{
    int a;
    int b;
};

struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    TwoInts i2 = { };
    i2.a = 5;
    i2.b = 7;

    std::cout << i2.a << std::endl; //выведетс€ 5, т.к. строка 19
    std::cout << i2.b << std::endl; //выведетс€ 7
    
    StructWithArray s = { };
    s.arr[0] = 10;

    StructWithArray s1 = { };
    s1.arr[0] = 15;

    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;

    std::cout << s.arr[0] << std::endl; //выведетс€ 10, стр. 26
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl; //выведетс€ 25 из-за предыдущей строки
    sPointer->arr[0] = 30;
    std::cout << s.arr[0] << std::endl; //выведетс€ 30 из-за предыдущей строки

    sPointer = &s1;
    sPointer->arr[0] = 35;
    std::cout << s.arr[0] << std::endl; //выведетс€ 30, значение не мен€лось
    std::cout << s1.arr[0] << std::endl;    //выведетс€ 35, стр. 41

    StructWithArray structArray[2] = { };   //массив объектов с массивами ’(
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3];

    sPointer = &s;
    int* pointer = &sPointer->arr[3];
    s.arr[3] = 72;
    std::cout << *pointer;  //выведетс€ 72, т.к. это указатель на значение из предыдущей строки

    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));
    return 0;
}
