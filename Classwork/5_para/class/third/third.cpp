#include <iostream>

using namespace std;

int main()
{
	int numout = 0, numin;

	cout << "In: ";
	cin >> numin;

	while (numin > 0)
	{
		if (numin % 10 != 3 &&
			numin % 10 != 6)
		{
			numout *= 10;
			numout += numin % 10;
		}
		numin /= 10;
	}

	cout << "Out: ";

	while (numout > 0)
	{
		cout << numout % 10;
		numout /= 10;
	}
	cout << endl;
	return 0;
}