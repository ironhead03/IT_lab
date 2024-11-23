#include <iostream>
#include <array>
#include <cassert>
using namespace std;

int countOnes(string_view nums)
{
	int ones = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == '1')
			ones++;
	}

	return ones;
}

void runTests(string_view nums)
{
	assert(countOnes(nums) == 0);
	assert(countOnes(nums) == 4);
	assert(countOnes(nums) == 10);
}

void main()
{
	array<char, 11> str;

	cout << "Enter 10 numbers:" << endl;
	cin.getline(str.data(), str.size());
	string_view nums{ str.data(), str.size() };

	runTests(nums);

	cout << nums;
}
