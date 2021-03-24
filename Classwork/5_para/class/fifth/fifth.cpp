#include <iostream>

using namespace std;

int main()
{
	int numcube=0, numin, square, num;

	cout << "num: ";
	cin >> numin;
	num = numin;
	square = numin  * numin;

	while (numin > 0)
	{
		numcube += numin % 10;
		numin /= 10;
	}
	if ((numcube * numcube * numcube) == square)
	{
		cout << "++";
	}
	else
	{
		cout << "--";
	}
	return 0;
}