#include <iostream>
#include <ctime>
using namespace std;

void cheta()
{
    int sdadas;
}

int main()
{
    srand(time(0));
    // 1
    int arr[20], temp;
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 2;
        cout << arr[i] << " ";
    }

	for (int i = 0; i < 20; i++)
    {
        if (arr[i] == 0)
            arr[i] = -1;
    }


    for (int i = 0; i < 19; i++)
    {

        for (int j = 0; j < 19; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << endl;
	for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
    }

    // 2

    int arr2[20], arr1[20], j=0;
	for (int i = 0; i < 20; i++)
    {
        arr1[i] = rand() % 20 - 10;
        cout << arr1[i] << " ";
    }

	for (int i = 0; i < 20; i++)
    {
        if (arr1[i] > 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
    }
	for (int i = 0; i < 20; i++)
    {
        if (arr1[i] == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
    }
	for (int i = 0; i < 20; i++)
    {
        if (arr1[i] < 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
    }
    cout << endl;
	for (int i = 0; i < 20; i++)
    {
        cout << arr2[i] << " ";
    }

    // 3


    int num[5], bin = 0, k = 1;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        while (num)
        {
            bin += (num[i] % 2) * k;
            k *= 10;
            num[i] /= 2;
        }
		num[i] = bin;
    }
    for (int i = 0; i < 5; i++)
        cout << num[i];
    
}