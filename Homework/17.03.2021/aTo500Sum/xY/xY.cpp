#include <iostream>

using namespace std;

int main()
{
    int x, y, temp;
    cout << "Enter number: ";
    cin >> x;
	cout << "Enter number: ";
    cin >> y;
	temp = x;
    if (y == 0)
    {
        cout << 1;
        return 0;
    }
    for (int i = 1; i < y; i++)
    {
        x *= temp;
    }
    cout << x;
	return 1;
}