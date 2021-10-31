#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");

	cout << "Калькулятор\n\n";

	cout << "[+] Cложение\n";
	cout << "[-] Вычитание\n";
	cout << "[*] Умножение\n";
	cout << "[/] Деление\n";
	cout << "[1] Возведение числа в степень\n";
	cout << "[2] Нахождение квадратного корня числа\n";
	cout << "[3] Нахождение кубического корня числа\n\n";
	cout << "[!] Введите операцию: ";

	char operation;
	cin >> operation;

	cout << "[!] Введите первое число: ";
	float number1;
	cin >> number1;


	cout << "[!] Введите второе число: ";
	float number2;
	cin >> number2;

	if (operation == '+')
	{
		cout << "[+] Результат: " << number1 << " + " << number2 << " = " << number1 + number2;
	}

	if (operation == '-')
	{
		cout << "[-] Результат: " << number1 << " - " << number2 << " = " << number1 - number2;
	}

	if (operation == '*')
	{
		cout << "[*] Результат: " << number1 << " * " << number2 << " = " << number1 * number2;
	}

	if (operation == '/')
	{
		cout << "[/] Результат: " << number1 << " / " << number2 << " = " << number1 / number2;
	}

	if (operation == '1')
	{
		cout << "[1] Результат: " << pow(number1, number2);
	}

	if (operation == '2')
	{
		cout << "[2] Результат для первого числа : " << sqrt(number1) << endl << "[2] Результат для второго числа: " << sqrt(number2);
	}

	if (operation == '3')
	{
		cout << "[3] Результат для первого числа : " << cbrt(number1) << endl << "[3] Результат для второго числа: " << cbrt(number2);
	}


	int _; cin >> _;
	return 0;
}
