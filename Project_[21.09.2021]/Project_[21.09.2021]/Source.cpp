#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "[1]����\n";
    cout << "[2]�����\n";
    cout << "[3]����\n";
    cout << "[4]�����\n";

    int season;
    cout << "�������� ����� ����: \n";
    cin >> season;

    if (season == 1) {
        cout << "������ ����, ����� ����� ���������� � ��� ����!";
    }
    else if (season == 2) {
        cout << "������ �����, \"�������\" ����� ����!";
    }
    else if (season == 3) {
        cout << "������ ����, ����� ��������� ��������!";
    }
    else if (season == 4) {
        cout << "������ �����, ������ ����, ������� ������!";
    }
    else {
        cout << "���, ������ ...";
    }

    return 0;
}