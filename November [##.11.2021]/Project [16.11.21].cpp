#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>
#include <string>
//#include <ctime>

using namespace std;

void menu();
void settings(); 

void clear() {
    system("cls");
}


// КОД ВИКТОРИНЫ


// ----- Меню Викторины -----
void quizMenu()
{
    const short HIGHT = 4;
    const short WIDGTH = 5;

    string playingField[HIGHT][WIDGTH] = { 
        {"Программирование и алгоритмизация","400","300","200","100"},
        {"История программирования         ","400","300","200","100"},
        {"Основы ООП                       ","400","300","200","100"},
        {"1С                               ","400","300","200","100"},
    };

    

    //cout << "Время: " << asctime(localtime(&sec));
    cout << "\n\n***  \"Викторина\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n\n";

    for (int i = 0; i < HIGHT; i++) {
        cout << "[" << i+1 << "]";
        for (int j = 0; j < WIDGTH; j++)
            cout << "\t" << playingField[i][j];
        cout << "\n";
    }

    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition-1) {
    case -1:
        menu();
        break;
    default:
        clear();
        break;
    }
}


// *КОД ВИКТОРИНЫ

void rules() {
    clear();
    cout << "\n\n***  \"Правила\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";
    cout << "\n Приятной игры; \n";
    cout << "\x1b[31m--------------------\x1b[0m\n\n";
    system("pause");
    clear();
    menu();
}

void settings() {
    clear();
    cout << "\n\n***  \"Настройки\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m";
    cout << "\n[1] Выбрать ";
    cout << "\n[2] Выбрать ";
    cout << "\n[3] Выбрать ";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        menu();
        break;
    default:
        clear();
        break;
    }
    menu();
}

void menu() {
    clear();
    cout << "\a\n\n***Приветствуем Вас в программе — \"Викторина\"***\t\t\t\n";
    cout << "\x1b[31m————————————————————————————————————————————————————————\x1b[0m";
    cout << "\n[1] Играть";
    cout << "\n[2] Настройки";
    cout << "\n[3] Правила";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        break;
    case 1:
        clear();
        quizMenu();
        break;
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
