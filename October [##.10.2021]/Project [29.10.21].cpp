#include <iostream>
#include <math.h>
using namespace std;



void clear();
void menu();

void clear() {
    system("cls");
}

int Calc(int num1, int num2, char operationeration)
{
    if (operationeration == '/' && num2 == 0)
        cout << '0';
    switch (operationeration)
    {
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            return num1 / num2;
            break;
        case '^':
            return pow(num1, num2);
            break;
        case '%':
            return num1 % num2;
            break;
        case '2':
            return sqrt(num1);
            break;
        case '3':
            return cbrt(num1);
            break;
        default:
            cout << "Такого действия не существует\n";
            break;
    }
    system("pause");
    clear();
    menu();
}

void menu() {
    int num1, num2;
    char operation;

    cout << "\a\n\n***Приветствуем Вас в программе — \"Калькулятор\"***\t\t\t\n";
    cout << "——————————————————————————————————————————————————\n";
    cout << "[0] Выход\n\n";
    cout << "Сколько чисел будете использовать: ";
    short condition; cin >> condition;


    if (condition == 0)
        abort();
    else if (condition == 1)
    {
        cout << "[*]Введите ваше число: ";
        cin >> num1;
        cout << "\n\n";
        
        cout << "--------------------\n";
        cout << "[2]Квадратный корень из числа\n";
        cout << "[3]Кубический корень из числа\n";
        cout << "--------------------\n";
        cin >> operation;
        cout << "Результат: " << Calc(num1, 0, operation) << "\n\n";
    }
    else if (condition == 2)
    {

        cout << "[*]Введите первое число: ";
        cin >> num1;
        cout << "[*]Введите второе число: ";
        cin >> num2;
        cout << "\n\n";

        cout << "[+] - сложение\n";
        cout << "[-] - вычитание\n";
        cout << "[*] - умножение\n";
        cout << "[/] - деление\n";
        cout << "[^] - возведение в степень\n";
        cout << "[%] - остаток от деления\n";
        cout << "--------------------\n";
        cout << "\n\aВыберите действие: ";
        cin >> operation;
        cout << "--------------------\n";

        cout << "\n[*]Результат: " << Calc(num1, num2, operation) << "\n\n";
    }
    else  {
        cout << "Такого действия не существует\n";
        system("pause");
        clear();
        menu();
    }
}

int main(int argc, char* argv[]) {
    setlocale(0, "");
    menu();
    system("pause");
    return 0;
}
