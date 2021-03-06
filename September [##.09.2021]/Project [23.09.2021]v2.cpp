#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    char sw = 0;
    double a, b;
    cout << "\a\t\t***Приветствуем Вас в программе***\t\t\t\n";
    
    cout << "\n\aВыберите действие над числами:" << endl;
    cout << "[+] Cложение\n";
    cout << "[-] Вычитание\n";
    cout << "[*] Умножение\n";
    cout << "[/] Деление\n";
    cout << "[^] Возведение числа в степень\n";
    cout << "[1] Нахождение квадратного корня числа\n";
    cout << "[2] Нахождение кубического корня числа\n\n";
    cout << "[0] Выход\n" << endl;
    cin >> sw;
    if (sw == '+' || sw == '-' || sw == '*' || sw == '/')
    {
        cout << "\nВведите первое число - ";
        cin >> a;
        cout << "\nВведите второе число - ";
        cin >> b;

        switch (sw)
        {
            case '+': {cout << a << "+" << b << "=" << a + b << "\n"; break; }
            case '-': {cout << a << "-" << b << "=" << a - b << "\n"; break; }
            case '*': {cout << a << "*" << b << "=" << a * b << "\n"; break; }
            case '/': {cout << a << "/" << b << "=" << a / b << "\n"; break; }
        }
    }
    else if (sw == '^' || sw == '1' || sw == '2')
    {
        cout << "\nВведите число - ";
        cin >> a;
        if (sw == '^')
        {
            cout << "\nВведите степень числа - ";
            cin >> b;
        }

        switch (sw)
        {
        case '^': {cout << a << "^" << b << "=" << pow(a, b) << "\n"; break; }
        case '1': {cout << "Квадратный корень из числа " << a << " = " << sqrt(a) << "\n"; break; }
        case '2': {cout << "Кубический корень из числа " << a << " = " << cbrt(a) << "\n"; break; }
        }
    }
    else {
        cout << "Выход из программы! " << endl;
        system("pause");
        return 0;
    }
}
