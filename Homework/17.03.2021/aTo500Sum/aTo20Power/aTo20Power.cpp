#include <iostream>

using namespace std;

int main()
{
    __int64 pow=1;
    int a;
    cout << "Enter number to start count with: ";
    cin >> a;
    for (a; a <= 20; a++) //20 включительно
    {
        pow *= a;
    }

    cout << "Power: " << pow;
}