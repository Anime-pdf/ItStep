#include <iostream>

using namespace std;

bool isSame(int a)
{
	if (a / 100 == a % 10 || a / 100 == a % 100 / 10 || a % 100 / 10 == a % 10)
		return true;
	else
		return false;
}

int main()
{
	int first_count = 0, second_count = 0;
	for (int i = 100; i < 1000; i++)
	{
		if (isSame(i))
			first_count++;
		else
			second_count++;
	}
	system("pause");
	return 0;
}