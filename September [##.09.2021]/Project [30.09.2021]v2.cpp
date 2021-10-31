#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int season, number, leap_year;

    cout << "Календарь\n\n";
    cout << "[1] Январь\n";
    cout << "[2] Февраль\n";
    cout << "[3] Март\n";
    cout << "[4] Апрель\n";
    cout << "[5] Май\n";
    cout << "[6] Июнь\n";
    cout << "[7] Июль\n";
    cout << "[8] Август\n";
    cout << "[9] Сентябрь\n";
    cout << "[10] Октябрь\n";
    cout << "[11] Ноябрь\n";
    cout << "[12] Декабрь\n\n";

    cout << "Выберите желаемый месяц: ";
    cin >> season;

    cout << "Выберите число: ";
    cin >> number;

    cout << endl;

    switch (season)
    {
    case 1:
        if (number <= 31 and number > 0)
        {
            cout << number << " января";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 2:
        cout << "Високосный год?\n";
        cout << "[1] Да\n";
        cout << "[2] Нет\n\n";
        cin >> leap_year;
        cout << endl;

        switch (leap_year)
        {
        case 1:
            if (number <= 29 and number > 0)
            {
                cout << number << " февраля";
            }
            else
            {
                cout << "Такого дня в этом месяце нет";
            }
            break;
        case 2:
            if (number <= 28 and number > 0)
            {
                cout << number << " февраля";
            }
            else
            {
                cout << "Такого дня в этом месяце нет";
            }
            break;
        }
        break;
        
    case 3:
        if (number <= 30 and number > 0)
        {
            cout << number << " марта";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 4:
        if (number <= 31 and number > 0)
        {
            cout << number << " апреля";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 5:
        if (number <= 30 and number > 0)
        {
            cout << number << " мая";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 6:
        if (number <= 31 and number > 0)
        {
            cout << number << " июня";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 7:
        if (number <= 30 and number > 0)
        {
            cout << number << " июля";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 8:
        if (number <= 31 and number > 0)
        {
            cout << number << " августа";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 9:
        if (number <= 30 and number > 0)
        {
            cout << number << " сентября";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 10:
        if (number <= 31 and number > 0)
        {
            cout << number << " октября";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 11:
        if (number <= 30 and number > 0)
        {
            cout << number << " ноября";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    case 12:
        if (number <= 31 and number > 0)
        {
            cout << number << " декабря";
        }
        else
        {
            cout << "Такого дня в этом месяце нет";
        }
        break;
    }

    int _; cin >> _;
    return 0;
}
