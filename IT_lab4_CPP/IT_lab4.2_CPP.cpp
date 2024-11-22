#include <iostream>
#include <span>
using namespace std;

void product(std::span<int> inputOutput, std::span<int> coefficients)
{

}

void main()
{
	int inputOutput[] = { 8,6,4,3 };
	int coefficients[] = { 6,5,8,3 };

	product(inputOutput, inputOutput);
}