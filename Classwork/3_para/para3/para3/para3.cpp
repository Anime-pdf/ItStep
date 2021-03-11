#include <iostream>

using namespace std;

int main()
{
    cout << "\t===CALCULATOR===\n1.add\n2.subtract\n3.multiplication\n4.division\n";

    int operation, first_number, second_number;

    cout << "What do u waht to use (Enter number): ";
    cin >> operation;

	cout << "Enter first number: ";
    cin >> first_number;
	cout << "Enter second number: ";
    cin >> second_number;
    if (second_number==0 && operation==4)
    {
        cout << "no";
        return -1;
    }

    switch (operation)
    {
    case 1:
        cout << "Result:" << first_number + second_number;
        break;
    case 2:
		cout << "Result:" << first_number - second_number;
        break;
    case 3:
		cout << "Result:" << first_number * second_number;
        break;
    case 4:
		cout << "Result:" << first_number / second_number;
        break;
    default:
		cout << "no";
        return -1;
        break;
    }

    system("pause");
    return 1;
}