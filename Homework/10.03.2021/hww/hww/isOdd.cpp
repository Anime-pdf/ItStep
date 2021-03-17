#include <iostream>

using namespace std;

void main()
{
	int number;
	cout << "Enter number: ";
    cin >> number;
	if (number%2==0)
		cout << number << " is odd";
	else
		cout << number << " isn't odd";
}