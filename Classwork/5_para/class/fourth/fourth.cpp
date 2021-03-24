#include <iostream>

using namespace std;

int main()
{
	int num, b=2;

	cin >> num;

	if (num > 3)
	{
		cout << "Here are numbers: ";
	}
	else
	{
		cout << "no";
		return 1;
	}
		
	for (num; num >= b*b; b++)
	{
		if (num % (b*b) == 0 && num % (b*b*b) != 0)
		{
			cout << b << endl;
		}
	}
	return 0;
}