#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");

	cout << "�����������\n\n";

	cout << "[+] C�������\n";
	cout << "[-] ���������\n";
	cout << "[*] ���������\n";
	cout << "[/] �������\n";
	cout << "[1] ���������� ����� � �������\n";
	cout << "[2] ���������� ����������� ����� �����\n";
	cout << "[3] ���������� ����������� ����� �����\n\n";
	cout << "[!] ������� ��������: ";

	char operation;
	cin >> operation;

	cout << "[!] ������� ������ �����: ";
	float number1;
	cin >> number1;


	cout << "[!] ������� ������ �����: ";
	float number2;
	cin >> number2;

	if (operation == '+')
	{
		cout << "[+] ���������: " << number1 << " + " << number2 << " = " << number1 + number2;
	}

	if (operation == '-')
	{
		cout << "[-] ���������: " << number1 << " - " << number2 << " = " << number1 - number2;
	}

	if (operation == '*')
	{
		cout << "[*] ���������: " << number1 << " * " << number2 << " = " << number1 * number2;
	}

	if (operation == '/')
	{
		cout << "[/] ���������: " << number1 << " / " << number2 << " = " << number1 / number2;
	}

	if (operation == '1')
	{
		cout << "[1] ���������: " << pow(number1, number2);
	}

	if (operation == '2')
	{
		cout << "[2] ��������� ��� ������� ����� : " << sqrt(number1) << endl << "[2] ��������� ��� ������� �����: " << sqrt(number2);
	}

	if (operation == '3')
	{
		cout << "[3] ��������� ��� ������� ����� : " << cbrt(number1) << endl << "[3] ��������� ��� ������� �����: " << cbrt(number2);
	}


	int _; cin >> _;
	return 0;
}