#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;

short condition, step, boardSize;



void clear();
void menu();
void settings();

void clear() {
    system("cls");
}

void ConsoleColor()
{
    string foreground, color;

    clear();
    cout << "\n\n***  \"Цвет\"  ***\t\t\t\n\n";
    cout << "[0] - Чёрный\n";
    cout << "[1] - Синий\n";
    cout << "[2] - Зелёный\n";
    cout << "[3] - Голубой\n";
    cout << "[4] - Красный\n";
    cout << "[5] - Лиловый\n";
    cout << "[6] - Жёлтый\n";
    cout << "[7] - Белый\n";
    cout << "[8] - Серый\n";
    cout << "[9] - Светло-синий\n";
    cout << "[A] - Светло-зелёный\n";
    cout << "[B] - Светло-голубой\n";
    cout << "[C] - Светло-красный\n";
    cout << "[D] - Светло-лиловый\n";
    cout << "[E] - Светло-жёлтый\n";
    cout << "[F] - Ярко-белый\n\n";
    cout << "--------------------\n";
    cout << "\n\aВыберите цвет: ";
    cin >> foreground;

    color = "color " + 0 + foreground;
    const char* userColor = color.c_str();
    system(userColor);
    system("pause");
    settings();
}

void rules()
{
    clear();
    cout << "\n\n***  \"Правила\"  ***\t\t\t\n\n";
	cout << "\a\n\nИгроки по очереди ставят на свободные клетки поля 3х3 знаки\n"
		<< "(один всегда крестики, другой всегда нолики).\n"
		<< "Первый, выстроивший в ряд 3 своих фигур по вертикали, горизонтали или диагонали, выигрывает.\n\n\n";
	system("pause");
	clear();
	menu();
}

void settings()
{
	clear();
    cout << "\n\n***  \"Настройки\"  ***\t\t\t\n\n";
	cout << "[1] Выбрать цвет\n";
    cout << "[2] Выбрать кем ходить\n";
    cout << "[3] Выбрать размер доски\n\n";
	cout << "[0] Выход в меню\n";
    cout << "--------------------\n";
    cout << "\n\aВыберите действие: ";
    cin >> condition;
    switch (condition) {
    case 0:
        menu();
        break;
    case 1:
        ConsoleColor();
        break;
    case 2:
        clear();
        cout << "\n\n***  \"Выбор хода\"  ***\t\t\t\n\n";
        cout << "[1] Я буду играть крестиком!\t[X]\n";
        cout << "[2] Я буду играть ноликом!\t[O]\n";
        cout << "--------------------\n";
        cout << "\n\aВыберите действие: ";
        cin >> step;
        settings();
        break;
    case 3:
        clear();
        cout << "\n\n***  \"Выбор размера доски\"  ***\t\t\t\n\n";
        cout << "[1] 3х3\n";
        cout << "[2] 4х4\n";
        cout << "[3] 5х5\n";
        cout << "--------------------\n";
        cout << "\n\aВыберите действие: ";
        cin >> boardSize;
        settings();
        break;
	default:
		clear();
		settings();
	}
}


 
void menu() {
    clear();
    cout << "\a\n\n***Приветствуем Вас в программе — \"Крестики - Нолики\"***\t\t\t\n";
    cout << "————————————————————————————————————————————————————————\n";
    cout << "[1] Играть\n";
    cout << "[2] Настройки\n";
    cout << "[3] Правила\n\n";
    cout << "[0] Выход\n";
    cout << "--------------------\n";
    cout << "\n\aВыберите действие: ";
    cin >> condition;
    switch (condition)
    {
		case 0:
			abort();
			break;
		//case 1:
		//    game();
		//    break;
		case 2:
			settings();
			break;
		case 3:
			rules();
			break;
		default:
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
