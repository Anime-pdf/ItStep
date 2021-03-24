#include <iostream>

using namespace std;

int main()
{
    int k;
    cout << "Enter number: ";
    cin >> k;
    for (int i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i \n", k, i, k * i);
    }  
}