#include <iostream>
#include <array>
#include <cassert>
using namespace std;

void findSpace(string_view line)
{
	bool isSpace = false;

	string_view secondWord(line.data() + 4, 9);
	cout << "Control Word: " << secondWord << endl << "Output: ";

	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == ' ')
		{
			if (isSpace)
				break;
			isSpace = !isSpace;
			i++;
		}

		if (isSpace)
			cout << line[i];
	}
	cout << endl;

	assert(secondWord == "brightest");

	cout << "Success!" << endl;
}

void main()
{
	array<char, 40> str{ "The brightest day, the darkest night..." };

	string_view line{ str.data(), str.size() };

	findSpace(line);
}
