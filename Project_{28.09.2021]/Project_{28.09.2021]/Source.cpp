#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int choose_word;
	int choose_lang;

	cout << "Переводчик\n\n";

	cout << "Выберите, с какого на какой язык Вы хотите перевести:\n";
	cout << "[1] Русский -> Английский\n";
	cout << "[2] Английский -> Русский\n";
	cout << "[3] Выйти\n\n";
	cin >> choose_lang;

	if (choose_lang == 1) {
		cout << "\nРусский -> Английский\n\n";
		cout << "[1] Одиночество\n";
		cout << "[2] Исток\n";
		cout << "[3] Мобилизация\n";
		cout << "[4] Жест\n";
		cout << "[5] Вертеться\n";
		cout << "[6] Теория\n";
		cout << "[7] Материя\n";
		cout << "[8] Нежность\n";
		cout << "[9] Листопад\n";
		cout << "[10] Пассаж\n";
		cout << "[11] Запад\n";
		cout << "[12] Снадобье\n";
		cout << "[13] Башня\n";
		cout << "[14] Интеллект\n";
		cout << "[15] Неприятель\n\n";
		cout << "Выберите номер слова [1-15]: ";
		cin >> choose_word;

		switch (choose_word)
		{
		case 1:
			cout << "Solitude";
			break;
		case 2:
			cout << "Source";
			break;
		case 3:
			cout << "Mobilize";
			break;
		case 4:
			cout << "Gesture";
			break;
		case 5:
			cout << "Spin";
			break;
		case 6:
			cout << "Theory";
			break;
		case 7:
			cout << "Matter";
			break;
		case 8:
			cout << "Softness";
			break;
		case 9:
			cout << "Leaf fall";
			break;
		case 10:
			cout << "Passage";
			break;
		case 11:
			cout << "West";
			break;
		case 12:
			cout << "Potion";
			break;
		case 13:
			cout << "Tower";
			break;
		case 14:
			cout << "Intellect";
			break;
		case 15:
			cout << "Enemy";
			break;
		default:
			cout << "Просим прощения, но выбранного слова не существует...";
		}
	}
	else if (choose_lang == 2) {
		cout << "\nАнглийский -> Русский\n\n";
		cout << "[1] Solitude\n";
		cout << "[2] Source\n";
		cout << "[3] Mobilize\n";
		cout << "[4] Gesture\n";
		cout << "[5] Spin\n";
		cout << "[6] Theory\n";
		cout << "[7] Matter\n";
		cout << "[8] Softness\n";
		cout << "[9] Leaf fall\n";
		cout << "[10] Passage\n";
		cout << "[11] West\n";
		cout << "[12] Potion\n";
		cout << "[13] Tower\n";
		cout << "[14] Intellect\n";
		cout << "[15] Enemy\n\n";
		cout << "Выберите номер слова [1-15]: ";
		cin >> choose_word;

		switch (choose_word)
		{
		case 1:
			cout << "Одиночество";
			break;
		case 2:
			cout << "Исток";
			break;
		case 3:
			cout << "Мобилизация";
			break;
		case 4:
			cout << "Жест";
			break;
		case 5:
			cout << "Вертеться";
			break;
		case 6:
			cout << "Теория";
			break;
		case 7:
			cout << "Материя";
			break;
		case 8:
			cout << "Нежность";
			break;
		case 9:
			cout << "Листопад";
			break;
		case 10:
			cout << "Пассаж";
			break;
		case 11:
			cout << "Запад";
			break;
		case 12:
			cout << "Снадобье";
			break;
		case 13:
			cout << "Башня";
			break;
		case 14:
			cout << "Интеллект";
			break;
		case 15:
			cout << "Неприятель";
			break;
		default:
			cout << "Просим прощения, но выбранного слова не существует...";
		}
	}
	else {
		return 0;
	}

	int _; cin >> _;
	return 0;

}