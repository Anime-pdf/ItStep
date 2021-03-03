#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");
    int first_number, second_number;
    cout << "Введите первое число: ";
    cin >> first_number;
	cout << "Введите второе число: ";
    cin >> second_number;

    cout << endl << "Ваши числа: " << first_number << ", " << second_number;

    cout << "\
        Результат сложения:" << first_number + second_number << "\n\
        Результат отнимания:" << first_number - second_number << "\n\
        Результат умножения:" << first_number * second_number << "\n\
        Результат деления:" << first_number / second_number << "\n";

    system("pause");
    return 1;
}
