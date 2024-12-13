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

    std::cout << i2.a << std::endl; //выведется 5, т.к. строка 19

    std::cout << i2.b << std::endl; //выведется 7, стр. 20
    
    StructWithArray s = { };
    s.arr[0] = 10;

    StructWithArray s1 = { };
    s1.arr[0] = 15;

    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;

    std::cout << s.arr[0] << std::endl; //выведется 10, стр. 27
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl; //выведется 25 из-за предыдущей строки
    sPointer->arr[0] = 30;  //s.arr[0] равен 30
    std::cout << s.arr[0] << std::endl; //выведется 30 из-за предыдущей строки

    sPointer = &s1; //sPointer указывает на s1
    sPointer->arr[0] = 35;  //s1.arr[0] = 35
    std::cout << s.arr[0] << std::endl; //выведется 30, значение не менялось
    std::cout << s1.arr[0] << std::endl;    //выведется 35, стр. 41 & 42

    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3]; //structArray[1].someNumber = 77

    sPointer = &s;  //sPointer указывает на s
    int* pointer = &sPointer->arr[3];   //pointer указывает на s.arr[3]
    s.arr[3] = 72;
    std::cout << *pointer;  //выведется 72, т.к. это указатель на значение из предыдущей строки

    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));
    return 0;
}
