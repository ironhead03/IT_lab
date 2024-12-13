#include <iostream>
using namespace std;
#include <span>
#include <array>
#include <cassert>

//с циклом for
void forProduct(std::span<int> inputOutput, std::span<int> coefficients)
{
	assert(inputOutput.size() == coefficients.size());

	int threshold = 1000;

	for (int i = 0; i < inputOutput.size(); i++)
	{
		inputOutput[i] = inputOutput[i] * coefficients[i];
		if (inputOutput[i] > threshold)
			break;
		if (i == inputOutput.size() - 1)
			i = -1;
	}
}

//с циклом while
void whileProduct(std::span<int> inputOutput, std::span<int> coefficients)
{
	assert(inputOutput.size() == coefficients.size());

	int i = 0;
	int threshold = 1000;

	while (true)
	{
		inputOutput[i] = inputOutput[i] * coefficients[i];

		if (inputOutput[i] > threshold)
			break;

		i++;
		if (i == inputOutput.size())
			i = 0;
	}
}

void main()
{
	array m1{ 8, 7, 6, 5 };
	array m2{ 2, 3, 4, 5 };

	forProduct(m1, m2);
	//whileProduct(m1, m2);

	for (int i = 0; i < m1.size(); i++)
	{
		cout << m1[i] << " ";
	}
}
