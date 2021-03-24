#include <iostream>

using namespace std;

int main()
{
    int a, sum=0;
    cout << "Enter number to start count with: ";
    cin >> a;
    for (int i = a; i <= 500; i++) //500 включительно
    {
        sum += i;
    }

    cout << "Sum: " << sum;
}