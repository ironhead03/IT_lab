#include <iostream>
using namespace std;

/*
4. ������ - ������� ������ ���-�� ����������, �� �� ����������; ������� �� ���������� - ����� return
6. ������ - ��� ����� f.cpp ��� ����������� �������
8. ������ - static ����������� ������� � ������, �� ���� static ������� �� ������ f.cpp ����� ������������� ������ � ������ f.cpp
10. ������ ��������, ��� ��� ������ � main ���� ���� static �������, �� ���� � ����� ������������� � ������ main
11. ���� ���������� �� ����� ������ ����� �������, �� �������������� ������ � ���������
*/

//int hello(int x);
static int hello(int x)
{
	return x;
}

void main()
{
	int x = 42;

	cout << hello(x);
}