#include <iostream>

using namespace std;

int main()
{
    cout << "Insert the day of week (1, 2, 3...): ";

    int day;

    cout << "What do u waht to use (Enter number): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday:\n8:00 - Chill\n23:00 - Sleep";
        break;
    case 2:
        cout << "Tuesday:\n8:00 - Chill\n23:00 - Sleep";
        break;
    case 3:
        cout << "Wednesday:\n8:00 - Chill\n23:00 - Sleep";
        break;
    case 4:
        cout << "Thursday:\n8:00 - Chill\n23:00 - Sleep"; 
        break;
	case 5:
        cout << "Friday:\n8:00 - Chill\n23:00 - Sleep";
        break;
    case 6:
        cout << "Saturday:\n8:00 - Chill\n23:00 - Sleep";
        break;
    case 7:
        cout << "Sunday:\n8:00 - Chill\n23:00 - Sleep";
        break;
    default:
        cout << "There isn't any day like this";
        return -1;
        break;
    }

    system("pause");
    return 1;
}