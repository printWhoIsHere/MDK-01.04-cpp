#include <iostream>
#include <windows.h>
using namespace std;

void clear();
void menu();

void clear() {
    system("cls");
}

void ConsoleColor()
{
    string background, foreground, color;

    cout << "\n\n--------------------\n    Цвет Консоли\n--------------------\n";
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
    cout << "Выберите цвет фона: ";
    cin >> background;
    cout << "Выберите цвет текста: ";
    cin >> foreground;
    cout << "--------------------\n";

    color = "color " + background + foreground;
    const char* userColor = color.c_str();
    system(userColor);
    system("pause"); menu();
}

void getSizeInt()
{
    cout << "Размер типа данных (int) = " << sizeof(int) << endl; system("pause"); system("cls"); menu();
}
void getSizeShort()
{
    cout << "Размер типа данных (short) = " << sizeof(short) << endl; system("pause"); system("cls"); menu();
}
void getSizeChar()
{
    cout << "Размер типа данных (char) = " << sizeof(char) << endl; system("pause"); system("cls"); menu();
}
void getSizeFloat()
{
    cout << "Размер типа данных (float) = " << sizeof(float) << endl; system("pause"); system("cls"); menu();
}
void getSizeDouble()
{
    cout << "Размер типа данных (double) = " << sizeof(double) << endl; system("pause"); system("cls"); menu();
}
void getSizeBool()
{
    cout << "Размер типа данных (bool) = " << sizeof(bool) << endl; system("pause"); system("cls"); menu();
}

void Labyrinth() {
    cout << "\n\n--------------------\n    Лабиринт\n--------------------\n";
    int array[10][10] = {
            {1,1,1,0,1,1,1,1,1,1},
            {0,0,1,0,0,0,0,0,0,1},
            {1,0,1,1,1,1,1,1,0,1},
            {1,0,1,0,0,0,1,0,0,1},
            {1,0,1,0,1,0,1,0,1,1},
            {1,0,1,0,1,0,0,0,0,1},
            {1,0,1,0,1,1,1,1,0,1},
            {1,0,1,0,1,0,0,1,0,1},
            {1,0,0,0,1,1,0,0,0,1},
            {1,1,1,1,1,1,1,1,1,1}
    };
    cout << "\n\n\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            if (array[i][j] == 1) {
                cout << static_cast<char>(1);
                cout << static_cast<char>(1);
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void Text()
{

    cout << "\n\n--------------------\n    Вывод текста\n--------------------\n\n";
    cout << "--------------------\n";
    cout << "Одеяло укусило,\n";
    cout << "Бок прогрызла простыня,\n";
    cout << "И подушка, как пиранья,\n";
    cout << "Ноги съела у меня.\n\n";
    cout << "Я за свечку - пальца нету,\n";
    cout << "Я за книжку - та бежать.\n";
    cout << "Позову-ка Константина,\n";
    cout << "Надо бесов изгонять!\n";
    cout << "--------------------\n";


    system("pause"); menu();
}

void menu() {
    cout << "\a\n\n***Приветствуем Вас в программе — \"Функции\"***\t\t\t\n";
    cout << "——————————————————————————————————————————————\n";
    cout << "[0] Выход\n";
    cout << "--------------------\n";
    cout << "[1] Изменить цвет консоли\n";
    cout << "[2] Вывод размера типа данных — (int)\n";
    cout << "[3] Вывод размера типа данных — (short)\n";
    cout << "[4] Вывод размера типа данных — (char)\n";
    cout << "[5] Вывод размера типа данных — (float)\n";
    cout << "[6] Вывод размера типа данных — (double)\n";
    cout << "[6] Вывод размера типа данных — (bool)\n";
    cout << "[7] Вывести лабиринт\n";
    cout << "[8] Вывести текст\n";
    cout << "--------------------\n";
    cout << "\n\aВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        abort();
        break;
    case 1:
        ConsoleColor();
        break;
    case 2:
        getSizeInt();
        break;
    case 3:
        getSizeShort();
        break;
    case 4:
        getSizeChar();
        break;
    case 5:
        getSizeFloat();
        break;
    case 6:
        getSizeDouble();
        break;
    case 7:
        Labyrinth();
        break;
    case 8:
        Text();
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
