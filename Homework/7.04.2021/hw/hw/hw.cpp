#include <iostream>

using namespace std;

int main()
{
    // 1
    int arr_first[10], min = 100, max = 0;
    for (int i = 0; i < 10; i++)
    {
        arr_first[i] = rand() % 100;
        if (arr_first[i] < min)
            min = arr_first[i];
		if (arr_first[i] > max)
            max = arr_first[i];
    }
    // 2
    int month[12], diap_start, diap_end, max;
    
    for (int i = 0; i < 12; i++)
        cin >> month[i];
    max = month[0];
    cin >> diap_start >> diap_end;

    for (int i = diap_start; i < diap_end; i++)
    {
        if (month[i] > max)
            max = month[i];
    }
    // 3
    const int N = 10;
    float arr[N], sum_neg = 0, chetnie = 1, sum_neg2 = 0, min_max = 1;
    int min, max, neg_index_start = -1, neg_index_end = N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
	cin >> min >> max;
    for (int i = min; i < max; i++) //Произведение элементов, находящихся между min и max элементами.
        min_max *= arr[i];
    for (int i = 0; i < N; i+=2) //Произведение элементов с четными номерами.
        chetnie *= arr[i];

	for (int i = 0; i < N; i++) //Сумму отрицательных элементов.
        if(arr[i] < 0)
            sum_neg += arr[i];

    for (int i = 0; i < N; i++) 
    {
        if (arr[i] < 0 && neg_index_start != -1)
            neg_index_start = i;
    }

	for (int i = N-1; i >= 0; i--) 
    {
        if (arr[i] < 0 && neg_index_end != N)
            neg_index_end = i;
    }

    for (int i = neg_index_start; i < neg_index_end; i++) //Сумму элементов, находящихся между первым и последним отрицательными элементами.
        sum_neg2 += arr[i];

    return 0;
}