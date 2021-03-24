#include <iostream>

using namespace std;

int main()
{
    float a=0, count=0;

    for (int i=1; i <= 1000; i++) //1000 включительно
    {
        a += i;
        count++;
    }

    cout << a/count;
}