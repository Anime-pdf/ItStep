#include <iostream>

using namespace std;

bool containsTorS(int a)
{
	if (a / 100 == 3 || a % 100 / 10 == 3 || a % 10 == 3)
		return true;
	else if (a / 100 == 6 || a % 100 / 10 == 6 || a % 10 == 6)
		return true;
	else
		return false;
}

int deleteTnS(int a)
{
	int b=0;
	if (a/100 == 3 || a/100 == 6)
		b = a % 100;
	else if (a%10 == 3 || a%10 == 6)
		b = a / 10;
	else if (a % 100 / 10 == 6 || a % 100 / 10 == 3)
		b = a / 100*10 + a % 10;
	else
		return a;

	return b;
}

int main()
{
	int a;
	cin >> a;
	if (containsTorS(a))
	{
		a = deleteTnS(a);
	}
	cout << a;
	system("pause");
	return 0;
}