#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int choose_word;
	int choose_lang;

	cout << "����������\n\n";

	cout << "��������, � ������ �� ����� ���� �� ������ ���������:\n";
	cout << "[1] ������� -> ����������\n";
	cout << "[2] ���������� -> �������\n";
	cout << "[3] �����\n\n";
	cin >> choose_lang;

	if (choose_lang == 1) {
		cout << "\n������� -> ����������\n\n";
		cout << "[1] �����������\n";
		cout << "[2] �����\n";
		cout << "[3] �����������\n";
		cout << "[4] ����\n";
		cout << "[5] ���������\n";
		cout << "[6] ������\n";
		cout << "[7] �������\n";
		cout << "[8] ��������\n";
		cout << "[9] ��������\n";
		cout << "[10] ������\n";
		cout << "[11] �����\n";
		cout << "[12] ��������\n";
		cout << "[13] �����\n";
		cout << "[14] ���������\n";
		cout << "[15] ����������\n\n";
		cout << "�������� ����� ����� [1-15]: ";
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
			cout << "������ ��������, �� ���������� ����� �� ����������...";
		}
	}
	else if (choose_lang == 2) {
		cout << "\n���������� -> �������\n\n";
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
		cout << "�������� ����� ����� [1-15]: ";
		cin >> choose_word;

		switch (choose_word)
		{
		case 1:
			cout << "�����������";
			break;
		case 2:
			cout << "�����";
			break;
		case 3:
			cout << "�����������";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "���������";
			break;
		case 6:
			cout << "������";
			break;
		case 7:
			cout << "�������";
			break;
		case 8:
			cout << "��������";
			break;
		case 9:
			cout << "��������";
			break;
		case 10:
			cout << "������";
			break;
		case 11:
			cout << "�����";
			break;
		case 12:
			cout << "��������";
			break;
		case 13:
			cout << "�����";
			break;
		case 14:
			cout << "���������";
			break;
		case 15:
			cout << "����������";
			break;
		default:
			cout << "������ ��������, �� ���������� ����� �� ����������...";
		}
	}
	else {
		return 0;
	}

	int _; cin >> _;
	return 0;

}