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

    std::cout << i2.a << std::endl; //��������� 5, �.�. ������ 19   //output 5, because line 19

    std::cout << i2.b << std::endl; //��������� 7, ���. 20  //output 7, line 20
    
    StructWithArray s = { };
    s.arr[0] = 10;

    StructWithArray s1 = { };
    s1.arr[0] = 15;

    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;

    std::cout << s.arr[0] << std::endl; //��������� 10, ���. 27 //output 10, line 27
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl; //��������� 25 ��-�� ���������� ������  //output 25 because previous line
    sPointer->arr[0] = 30;  //s.arr[0] is 30
    std::cout << s.arr[0] << std::endl; //��������� 30 ��-�� ���������� ������  //output 30 because previous line

    sPointer = &s1; //sPointer now points to s1
    sPointer->arr[0] = 35;  //s1.arr[0] = 35
    std::cout << s.arr[0] << std::endl; //��������� 30, �������� �� ��������    //output 30, value did not change
    std::cout << s1.arr[0] << std::endl;    //��������� 35, ���. 41 & 42    //output 35, lines 41 & 42

    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3]; //structArray[1].someNumber = 77

    sPointer = &s;  //sPointer now points to s
    int* pointer = &sPointer->arr[3];   //pointer points to s.arr[3]
    s.arr[3] = 72;
    std::cout << *pointer;  //��������� 72, �.�. ��� ��������� �� �������� �� ���������� ������ //output 72, because pointer to value in previous line

    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));
    return 0;
}
