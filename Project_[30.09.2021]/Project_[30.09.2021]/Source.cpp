#include <iostream>

using namespace std;

int main() 
{
	setlocale(0, "");

	int num, season, leap_year;

	cout << "���������\n\n";
	cout << "[1] ������\n";
	cout << "[2] �������\n";
	cout << "[3] ����\n";
	cout << "[4] ������\n";
	cout << "[5] ���\n";
	cout << "[6] ����\n";
	cout << "[7] ����\n";
	cout << "[8] ������\n";
	cout << "[9] ��������\n";
	cout << "[10] �������\n";
	cout << "[11] ������\n";
	cout << "[12] �������\n\n";

	cout << "�������� �������� �����: ";
	cin >> season;
	
	

	switch (season)
	{
	case 1:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " ������";

			break;
		case 2:

			cout << "���������: " << num << " ������";

			break;
		case 3:

			cout << "���������: " << num << " ������";

			break;
		case 4:

			cout << "���������: " << num << " ������";

			break;
		case 5:

			cout << "���������: " << num << " ������";

			break;
		case 6:

			cout << "���������: " << num << " ������";

			break;
		case 7:

			cout << "���������: " << num << " ������";

			break;
		case 8:

			cout << "���������: " << num << " ������";

			break;
		case 9:

			cout << "���������: " << num << " ������";

			break;
		case 10:

			cout << "���������: " << num << " ������";

			break;
		case 11:

			cout << "���������: " << num << " ������";

			break;
		case 12:

			cout << "���������: " << num << " ������";

			break;
		case 13:

			cout << "���������: " << num << " ������";

			break;
		case 14:

			cout << "���������: " << num << " ������";

			break;
		case 15:

			cout << "���������: " << num << " ������";

			break;
		case 16:

			cout << "���������: " << num << " ������";

			break;
		case 17:

			cout << "���������: " << num << " ������";

			break;
		case 18:

			cout << "���������: " << num << " ������";

			break;
		case 19:

			cout << "���������: " << num << " ������";

			break;
		case 20:

			cout << "���������: " << num << " ������";

			break;
		case 21:

			cout << "���������: " << num << " ������";

			break;
		case 22:

			cout << "���������: " << num << " ������";

			break;
		case 23:

			cout << "���������: " << num << " ������";

			break;
		case 24:

			cout << "���������: " << num << " ������";

			break;
		case 25:

			cout << "���������: " << num << " ������";

			break;
		case 26:

			cout << "���������: " << num << " ������";

			break;
		case 27:

			cout << "���������: " << num << " ������";

			break;
		case 28:

			cout << "���������: " << num << " ������";

			break;
		case 29:

			cout << "���������: " << num << " ������";

			break;
		case 30:

			cout << "���������: " << num << " ������";

			break;
		case 31:

			cout << "���������: " << num << " ������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 2:

		cout << "���������� ���?\n";
		cout << "[1] ��\n";
		cout << "[2] ���\n\n";
		cin >> leap_year;

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " �������";

			break;
		case 2:

			cout << "���������: " << num << " �������";

			break;
		case 3:

			cout << "���������: " << num << " �������";

			break;
		case 4:

			cout << "���������: " << num << " �������";

			break;
		case 5:

			cout << "���������: " << num << " �������";

			break;
		case 6:

			cout << "���������: " << num << " �������";

			break;
		case 7:

			cout << "���������: " << num << " �������";

			break;
		case 8:

			cout << "���������: " << num << " �������";

			break;
		case 9:

			cout << "���������: " << num << " �������";

			break;
		case 10:

			cout << "���������: " << num << " �������";

			break;
		case 11:

			cout << "���������: " << num << " �������";

			break;
		case 12:

			cout << "���������: " << num << " �������";

			break;
		case 13:

			cout << "���������: " << num << " �������";

			break;
		case 14:

			cout << "���������: " << num << " �������";

			break;
		case 15:

			cout << "���������: " << num << " �������";

			break;
		case 16:

			cout << "���������: " << num << " �������";

			break;
		case 17:

			cout << "���������: " << num << " �������";

			break;
		case 18:

			cout << "���������: " << num << " �������";

			break;
		case 19:

			cout << "���������: " << num << " �������";

			break;
		case 20:

			cout << "���������: " << num << " �������";

			break;
		case 21:

			cout << "���������: " << num << " �������";

			break;
		case 22:

			cout << "���������: " << num << " �������";

			break;
		case 23:

			cout << "���������: " << num << " �������";

			break;
		case 24:

			cout << "���������: " << num << " �������";

			break;
		case 25:

			cout << "���������: " << num << " �������";

			break;
		case 26:

			cout << "���������: " << num << " �������";

			break;
		case 27:

			cout << "���������: " << num << " �������";

			break;
		case 28:

			cout << "���������: " << num << " �������";

			break;
		case 29:
			if (leap_year == 1) {
				cout << "���������: " << num << " �������";
			}
			else {
				cout << "������ ��� � ������� ���...";
				break;
			}
		default:
			cout << "������ ��� ���";
		}

		break;
	case 3:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " �����";

			break;
		case 2:

			cout << "���������: " << num << " �����";

			break;
		case 3:

			cout << "���������: " << num << " �����";

			break;
		case 4:

			cout << "���������: " << num << " �����";

			break;
		case 5:

			cout << "���������: " << num << " �����";

			break;
		case 6:

			cout << "���������: " << num << " �����";

			break;
		case 7:

			cout << "���������: " << num << " �����";

			break;
		case 8:

			cout << "���������: " << num << " �����";

			break;
		case 9:

			cout << "���������: " << num << " �����";

			break;
		case 10:

			cout << "���������: " << num << " �����";

			break;
		case 11:

			cout << "���������: " << num << " �����";

			break;
		case 12:

			cout << "���������: " << num << " �����";

			break;
		case 13:

			cout << "���������: " << num << " �����";

			break;
		case 14:

			cout << "���������: " << num << " �����";

			break;
		case 15:

			cout << "���������: " << num << " �����";

			break;
		case 16:

			cout << "���������: " << num << " �����";

			break;
		case 17:

			cout << "���������: " << num << " �����";

			break;
		case 18:

			cout << "���������: " << num << " �����";

			break;
		case 19:

			cout << "���������: " << num << " �����";

			break;
		case 20:

			cout << "���������: " << num << " �����";

			break;
		case 21:

			cout << "���������: " << num << " �����";

			break;
		case 22:

			cout << "���������: " << num << " �����";

			break;
		case 23:

			cout << "���������: " << num << " �����";

			break;
		case 24:

			cout << "���������: " << num << " �����";

			break;
		case 25:

			cout << "���������: " << num << " �����";

			break;
		case 26:

			cout << "���������: " << num << " �����";

			break;
		case 27:

			cout << "���������: " << num << " �����";

			break;
		case 28:

			cout << "���������: " << num << " �����";

			break;
		case 29:

			cout << "���������: " << num << " �����";

			break;
		case 30:

			cout << "���������: " << num << " �����";

			break;
		case 31:

			cout << "���������: " << num << " ������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 4:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " ������";

			break;
		case 2:

			cout << "���������: " << num << " ������";

			break;
		case 3:

			cout << "���������: " << num << " ������";

			break;
		case 4:

			cout << "���������: " << num << " ������";

			break;
		case 5:

			cout << "���������: " << num << " ������";

			break;
		case 6:

			cout << "���������: " << num << " ������";

			break;
		case 7:

			cout << "���������: " << num << " ������";

			break;
		case 8:

			cout << "���������: " << num << " ������";

			break;
		case 9:

			cout << "���������: " << num << " ������";

			break;
		case 10:

			cout << "���������: " << num << " ������";

			break;
		case 11:

			cout << "���������: " << num << " ������";

			break;
		case 12:

			cout << "���������: " << num << " ������";

			break;
		case 13:

			cout << "���������: " << num << " ������";

			break;
		case 14:

			cout << "���������: " << num << " ������";

			break;
		case 15:

			cout << "���������: " << num << " ������";

			break;
		case 16:

			cout << "���������: " << num << " ������";

			break;
		case 17:

			cout << "���������: " << num << " ������";

			break;
		case 18:

			cout << "���������: " << num << " ������";

			break;
		case 19:

			cout << "���������: " << num << " ������";

			break;
		case 20:

			cout << "���������: " << num << " ������";

			break;
		case 21:

			cout << "���������: " << num << " ������";

			break;
		case 22:

			cout << "���������: " << num << " ������";

			break;
		case 23:

			cout << "���������: " << num << " ������";

			break;
		case 24:

			cout << "���������: " << num << " ������";

			break;
		case 25:

			cout << "���������: " << num << " ������";

			break;
		case 26:

			cout << "���������: " << num << " ������";

			break;
		case 27:

			cout << "���������: " << num << " ������";

			break;
		case 28:

			cout << "���������: " << num << " ������";

			break;
		case 29:

			cout << "���������: " << num << " ������";

			break;
		case 30:

			cout << "���������: " << num << " ������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 5:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " �����";

			break;
		case 2:

			cout << "���������: " << num << " �����";

			break;
		case 3:

			cout << "���������: " << num << " �����";

			break;
		case 4:

			cout << "���������: " << num << " �����";

			break;
		case 5:

			cout << "���������: " << num << " �����";

			break;
		case 6:

			cout << "���������: " << num << " �����";

			break;
		case 7:

			cout << "���������: " << num << " �����";

			break;
		case 8:

			cout << "���������: " << num << " �����";

			break;
		case 9:

			cout << "���������: " << num << " �����";

			break;
		case 10:

			cout << "���������: " << num << " �����";

			break;
		case 11:

			cout << "���������: " << num << " �����";

			break;
		case 12:

			cout << "���������: " << num << " �����";

			break;
		case 13:

			cout << "���������: " << num << " �����";

			break;
		case 14:

			cout << "���������: " << num << " �����";

			break;
		case 15:

			cout << "���������: " << num << " �����";

			break;
		case 16:

			cout << "���������: " << num << " �����";

			break;
		case 17:

			cout << "���������: " << num << " �����";

			break;
		case 18:

			cout << "���������: " << num << " �����";

			break;
		case 19:

			cout << "���������: " << num << " �����";

			break;
		case 20:

			cout << "���������: " << num << " �����";

			break;
		case 21:

			cout << "���������: " << num << " �����";

			break;
		case 22:

			cout << "���������: " << num << " �����";

			break;
		case 23:

			cout << "���������: " << num << " �����";

			break;
		case 24:

			cout << "���������: " << num << " �����";

			break;
		case 25:

			cout << "���������: " << num << " �����";

			break;
		case 26:

			cout << "���������: " << num << " �����";

			break;
		case 27:

			cout << "���������: " << num << " �����";

			break;
		case 28:

			cout << "���������: " << num << " �����";

			break;
		case 29:

			cout << "���������: " << num << " �����";

			break;
		case 30:

			cout << "���������: " << num << " �����";

		case 31:

			cout << "���������: " << num << " �����";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 6:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " ����";

			break;
		case 2:

			cout << "���������: " << num << " ����";

			break;
		case 3:

			cout << "���������: " << num << " ����";

			break;
		case 4:

			cout << "���������: " << num << " ����";

			break;
		case 5:

			cout << "���������: " << num << " ����";

			break;
		case 6:

			cout << "���������: " << num << " ����";

			break;
		case 7:

			cout << "���������: " << num << " ����";

			break;
		case 8:

			cout << "���������: " << num << " ����";

			break;
		case 9:

			cout << "���������: " << num << " ����";

			break;
		case 10:

			cout << "���������: " << num << " ����";

			break;
		case 11:

			cout << "���������: " << num << " ����";

			break;
		case 12:

			cout << "���������: " << num << " ����";

			break;
		case 13:

			cout << "���������: " << num << " ����";

			break;
		case 14:

			cout << "���������: " << num << " ����";

			break;
		case 15:

			cout << "���������: " << num << " ����";

			break;
		case 16:

			cout << "���������: " << num << " ����";

			break;
		case 17:

			cout << "���������: " << num << " ����";

			break;
		case 18:

			cout << "���������: " << num << " ����";

			break;
		case 19:

			cout << "���������: " << num << " ����";

			break;
		case 20:

			cout << "���������: " << num << " ����";

			break;
		case 21:

			cout << "���������: " << num << " ����";

			break;
		case 22:

			cout << "���������: " << num << " ����";

			break;
		case 23:

			cout << "���������: " << num << " ����";

			break;
		case 24:

			cout << "���������: " << num << " ����";

			break;
		case 25:

			cout << "���������: " << num << " ����";

			break;
		case 26:

			cout << "���������: " << num << " ����";

			break;
		case 27:

			cout << "���������: " << num << " ����";

			break;
		case 28:

			cout << "���������: " << num << " ����";

			break;
		case 29:

			cout << "���������: " << num << " ����";

			break;
		case 30:

			cout << "���������: " << num << " ����";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 7:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " ����";

			break;
		case 2:

			cout << "���������: " << num << " ����";

			break;
		case 3:

			cout << "���������: " << num << " ����";

			break;
		case 4:

			cout << "���������: " << num << " ����";

			break;
		case 5:

			cout << "���������: " << num << " ����";

			break;
		case 6:

			cout << "���������: " << num << " ����";

			break;
		case 7:

			cout << "���������: " << num << " ����";

			break;
		case 8:

			cout << "���������: " << num << " ����";

			break;
		case 9:

			cout << "���������: " << num << " ����";

			break;
		case 10:

			cout << "���������: " << num << " ����";

			break;
		case 11:

			cout << "���������: " << num << " ����";

			break;
		case 12:

			cout << "���������: " << num << " ����";

			break;
		case 13:

			cout << "���������: " << num << " ����";

			break;
		case 14:

			cout << "���������: " << num << " ����";

			break;
		case 15:

			cout << "���������: " << num << " ����";

			break;
		case 16:

			cout << "���������: " << num << " ����";

			break;
		case 17:

			cout << "���������: " << num << " ����";

			break;
		case 18:

			cout << "���������: " << num << " ����";

			break;
		case 19:

			cout << "���������: " << num << " ����";

			break;
		case 20:

			cout << "���������: " << num << " ����";

			break;
		case 21:

			cout << "���������: " << num << " ����";

			break;
		case 22:

			cout << "���������: " << num << " ����";

			break;
		case 23:

			cout << "���������: " << num << " ����";

			break;
		case 24:

			cout << "���������: " << num << " ����";

			break;
		case 25:

			cout << "���������: " << num << " ����";

			break;
		case 26:

			cout << "���������: " << num << " ����";

			break;
		case 27:

			cout << "���������: " << num << " ����";

			break;
		case 28:

			cout << "���������: " << num << " ����";

			break;
		case 29:

			cout << "���������: " << num << " ����";

			break;
		case 30:

			cout << "���������: " << num << " ����";

		case 31:

			cout << "���������: " << num << " ����";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 8:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " �������";

			break;
		case 2:

			cout << "���������: " << num << " �������";

			break;
		case 3:

			cout << "���������: " << num << " �������";

			break;
		case 4:

			cout << "���������: " << num << " �������";

			break;
		case 5:

			cout << "���������: " << num << " �������";

			break;
		case 6:

			cout << "���������: " << num << " �������";

			break;
		case 7:

			cout << "���������: " << num << " �������";

			break;
		case 8:

			cout << "���������: " << num << " �������";

			break;
		case 9:

			cout << "���������: " << num << " �������";

			break;
		case 10:

			cout << "���������: " << num << " �������";

			break;
		case 11:

			cout << "���������: " << num << " �������";

			break;
		case 12:

			cout << "���������: " << num << " �������";

			break;
		case 13:

			cout << "���������: " << num << " �������";

			break;
		case 14:

			cout << "���������: " << num << " �������";

			break;
		case 15:

			cout << "���������: " << num << " �������";

			break;
		case 16:

			cout << "���������: " << num << " �������";

			break;
		case 17:

			cout << "���������: " << num << " �������";

			break;
		case 18:

			cout << "���������: " << num << " �������";

			break;
		case 19:

			cout << "���������: " << num << " �������";

			break;
		case 20:

			cout << "���������: " << num << " �������";

			break;
		case 21:

			cout << "���������: " << num << " �������";

			break;
		case 22:

			cout << "���������: " << num << " �������";

			break;
		case 23:

			cout << "���������: " << num << " �������";

			break;
		case 24:

			cout << "���������: " << num << " �������";

			break;
		case 25:

			cout << "���������: " << num << " �������";

			break;
		case 26:

			cout << "���������: " << num << " �������";

			break;
		case 27:

			cout << "���������: " << num << " �������";

			break;
		case 28:

			cout << "���������: " << num << " �������";

			break;
		case 29:

			cout << "���������: " << num << " �������";

			break;
		case 30:

			cout << "���������: " << num << " �������";

		case 31:

			cout << "���������: " << num << " �������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 9:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " ��������";

			break;
		case 2:

			cout << "���������: " << num << " ��������";

			break;
		case 3:

			cout << "���������: " << num << " ��������";

			break;
		case 4:

			cout << "���������: " << num << " ��������";

			break;
		case 5:

			cout << "���������: " << num << " ��������";

			break;
		case 6:

			cout << "���������: " << num << " ��������";

			break;
		case 7:

			cout << "���������: " << num << " ��������";

			break;
		case 8:

			cout << "���������: " << num << " ��������";

			break;
		case 9:

			cout << "���������: " << num << " ��������";

			break;
		case 10:

			cout << "���������: " << num << " ��������";

			break;
		case 11:

			cout << "���������: " << num << " ��������";

			break;
		case 12:

			cout << "���������: " << num << " ��������";

			break;
		case 13:

			cout << "���������: " << num << " ��������";

			break;
		case 14:

			cout << "���������: " << num << " ��������";

			break;
		case 15:

			cout << "���������: " << num << " ��������";

			break;
		case 16:

			cout << "���������: " << num << " ��������";

			break;
		case 17:

			cout << "���������: " << num << " ��������";

			break;
		case 18:

			cout << "���������: " << num << " ��������";

			break;
		case 19:

			cout << "���������: " << num << " ��������";

			break;
		case 20:

			cout << "���������: " << num << " ��������";

			break;
		case 21:

			cout << "���������: " << num << " ��������";

			break;
		case 22:

			cout << "���������: " << num << " ��������";

			break;
		case 23:

			cout << "���������: " << num << " ��������";

			break;
		case 24:

			cout << "���������: " << num << " ��������";

			break;
		case 25:

			cout << "���������: " << num << " ��������";

			break;
		case 26:

			cout << "���������: " << num << " ��������";

			break;
		case 27:

			cout << "���������: " << num << " ��������";

			break;
		case 28:

			cout << "���������: " << num << " ��������";

			break;
		case 29:

			cout << "���������: " << num << " ��������";

			break;
		case 30:

			cout << "���������: " << num << " ��������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 10:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " �������";

			break;
		case 2:

			cout << "���������: " << num << " �������";

			break;
		case 3:

			cout << "���������: " << num << " �������";

			break;
		case 4:

			cout << "���������: " << num << " �������";

			break;
		case 5:

			cout << "���������: " << num << " �������";

			break;
		case 6:

			cout << "���������: " << num << " �������";

			break;
		case 7:

			cout << "���������: " << num << " �������";

			break;
		case 8:

			cout << "���������: " << num << " �������";

			break;
		case 9:

			cout << "���������: " << num << " �������";

			break;
		case 10:

			cout << "���������: " << num << " �������";

			break;
		case 11:

			cout << "���������: " << num << " �������";

			break;
		case 12:

			cout << "���������: " << num << " �������";

			break;
		case 13:

			cout << "���������: " << num << " �������";

			break;
		case 14:

			cout << "���������: " << num << " �������";

			break;
		case 15:

			cout << "���������: " << num << " �������";

			break;
		case 16:

			cout << "���������: " << num << " �������";

			break;
		case 17:

			cout << "���������: " << num << " �������";

			break;
		case 18:

			cout << "���������: " << num << " �������";

			break;
		case 19:

			cout << "���������: " << num << " �������";

			break;
		case 20:

			cout << "���������: " << num << " �������";

			break;
		case 21:

			cout << "���������: " << num << " �������";

			break;
		case 22:

			cout << "���������: " << num << " �������";

			break;
		case 23:

			cout << "���������: " << num << " �������";

			break;
		case 24:

			cout << "���������: " << num << " �������";

			break;
		case 25:

			cout << "���������: " << num << " �������";

			break;
		case 26:

			cout << "���������: " << num << " �������";

			break;
		case 27:

			cout << "���������: " << num << " �������";

			break;
		case 28:

			cout << "���������: " << num << " �������";

			break;
		case 29:

			cout << "���������: " << num << " �������";

			break;
		case 30:

			cout << "���������: " << num << " �������";

		case 31:

			cout << "���������: " << num << " �������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 11:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " ������";

			break;
		case 2:

			cout << "���������: " << num << " ������";

			break;
		case 3:

			cout << "���������: " << num << " ������";

			break;
		case 4:

			cout << "���������: " << num << " ������";

			break;
		case 5:

			cout << "���������: " << num << " ������";

			break;
		case 6:

			cout << "���������: " << num << " ������";

			break;
		case 7:

			cout << "���������: " << num << " ������";

			break;
		case 8:

			cout << "���������: " << num << " ������";

			break;
		case 9:

			cout << "���������: " << num << " ������";

			break;
		case 10:

			cout << "���������: " << num << " ������";

			break;
		case 11:

			cout << "���������: " << num << " ������";

			break;
		case 12:

			cout << "���������: " << num << " ������";

			break;
		case 13:

			cout << "���������: " << num << " ������";

			break;
		case 14:

			cout << "���������: " << num << " ������";

			break;
		case 15:

			cout << "���������: " << num << " ������";

			break;
		case 16:

			cout << "���������: " << num << " ������";

			break;
		case 17:

			cout << "���������: " << num << " ������";

			break;
		case 18:

			cout << "���������: " << num << " ������";

			break;
		case 19:

			cout << "���������: " << num << " ������";

			break;
		case 20:

			cout << "���������: " << num << " ������";

			break;
		case 21:

			cout << "���������: " << num << " ������";

			break;
		case 22:

			cout << "���������: " << num << " ������";

			break;
		case 23:

			cout << "���������: " << num << " ������";

			break;
		case 24:

			cout << "���������: " << num << " ������";

			break;
		case 25:

			cout << "���������: " << num << " ������";

			break;
		case 26:

			cout << "���������: " << num << " ������";

			break;
		case 27:

			cout << "���������: " << num << " ������";

			break;
		case 28:

			cout << "���������: " << num << " ������";

			break;
		case 29:

			cout << "���������: " << num << " ������";

			break;
		case 30:

			cout << "���������: " << num << " ������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;
	case 12:

		cout << "������� �����: ";
		cin >> num;

		switch (num)
		{
		case 1:

			cout << "���������: " << num << " �������";

			break;
		case 2:

			cout << "���������: " << num << " �������";

			break;
		case 3:

			cout << "���������: " << num << " �������";

			break;
		case 4:

			cout << "���������: " << num << " �������";

			break;
		case 5:

			cout << "���������: " << num << " �������";

			break;
		case 6:

			cout << "���������: " << num << " �������";

			break;
		case 7:

			cout << "���������: " << num << " �������";

			break;
		case 8:

			cout << "���������: " << num << " �������";

			break;
		case 9:

			cout << "���������: " << num << " �������";

			break;
		case 10:

			cout << "���������: " << num << " �������";

			break;
		case 11:

			cout << "���������: " << num << " �������";

			break;
		case 12:

			cout << "���������: " << num << " �������";

			break;
		case 13:

			cout << "���������: " << num << " �������";

			break;
		case 14:

			cout << "���������: " << num << " �������";

			break;
		case 15:

			cout << "���������: " << num << " �������";

			break;
		case 16:

			cout << "���������: " << num << " �������";

			break;
		case 17:

			cout << "���������: " << num << " �������";

			break;
		case 18:

			cout << "���������: " << num << " �������";

			break;
		case 19:

			cout << "���������: " << num << " �������";

			break;
		case 20:

			cout << "���������: " << num << " �������";

			break;
		case 21:

			cout << "���������: " << num << " �������";

			break;
		case 22:

			cout << "���������: " << num << " �������";

			break;
		case 23:

			cout << "���������: " << num << " �������";

			break;
		case 24:

			cout << "���������: " << num << " �������";

			break;
		case 25:

			cout << "���������: " << num << " �������";

			break;
		case 26:

			cout << "���������: " << num << " �������";

			break;
		case 27:

			cout << "���������: " << num << " �������";

			break;
		case 28:

			cout << "���������: " << num << " �������";

			break;
		case 29:

			cout << "���������: " << num << " �������";

			break;
		case 30:

			cout << "���������: " << num << " �������";

		case 31:

			cout << "���������: " << num << " �������";

			break;
		default:
			cout << "������ ��� ���";
		}

		break;

		default: 
			cout << "������ ������ �� ���������� :c";
	}

	

	int _; cin >> _;
	return 0;
}