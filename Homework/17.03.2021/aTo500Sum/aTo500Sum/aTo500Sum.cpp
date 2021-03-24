#include <iostream>

using namespace std;

int main()
{
    int a, sum=0;
    cout << "Enter number to start count with: ";
    cin >> a;
    for (a; a <= 500; a++) //500 включительно
    {
        sum += a;
    }

    cout << "Sum: " << sum;
}