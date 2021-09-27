#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int choose;

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
	cout << "Выберите предпочитаемый месяц [1-12]: ";

	cin >> choose;

	switch (choose)
	{
	case 1:
		cout << "Вы выбрали Январь";
		break;
	case 2:
		cout << "Вы выбрали Февраль";
		break;
	case 3:
		cout << "Вы выбрали Март";
		break;
	case 4:
		cout << "Вы выбрали Апрель";
		break;
	case 5:
		cout << "Вы выбрали Май";
		break;
	case 6:
		cout << "Вы выбрали Июнь";
		break;
	case 7:
		cout << "Вы выбрали Июль";
		break;
	case 8:
		cout << "Вы выбрали Август";
		break;
	case 9:
		cout << "Вы выбрали Сентябрь";
		break;
	case 10:
		cout << "Вы выбрали Октябрь";
		break;
	case 11:
		cout << "Вы выбрали Ноябрь";
		break;
	case 12:
		cout << "Вы выбрали Декабрь";
		break;
	default:
		cout << "Просим прощения, но выбранного месяца не существует...";
	}

	int _; cin >> _;
	return 0;

}