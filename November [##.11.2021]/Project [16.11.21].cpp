#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>
#include <string>

#include <ctime>
#include <ratio>
#include <chrono>


using namespace std;

int countOfQuestions = 15;
int amountOfAttempts = 3;

const short HIGHT = 15;

string playingField[HIGHT][3] = {
    {"Вопрос 1. \n [1] - Ответ 1\n [2] - Ответ 2\n [3] - Ответ 3\n [4] - Ответ 4","1","0",},
    {"Вопрос 2. \n [1] - Ответ 1\n [2] - Ответ 2\n [3] - Ответ 3\n [4] - Ответ 4","1","0",},
    {"Вопрос 3. \n [1] - Ответ 1\n [2] - Ответ 2\n [3] - Ответ 3\n [4] - Ответ 4","1","0",},
    {"Вопрос 4. \n [1] - Ответ 1\n [2] - Ответ 2\n [3] - Ответ 3\n [4] - Ответ 4","1","0",}
};

void menu();
void settings();

void clear() {
    system("cls");
}


// КОД ВИКТОРИНЫ


// ----- Меню Викторины -----
void quizMenu()
{
    //cout << "Время: " << asctime(localtime(&sec));
    cout << "\n\n***  \"Викторина\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n\n";

    //Вывод вопроса
    for (int i = 0; i < HIGHT; i++) {
        cout << "Вопрос [" << i + 1 << "]";
            cout << "\t" << playingField[i][0];
        cout << "\n";
    }

    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition - 1) {
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

bool plaingGame(time_t time_rel) {

    time_t now = time(0);
    // convert now to string form
    char* startTime = ctime(&now);
    cout << "The local date and time is: " << startTime << endl;
    size_t Minutes = 1;
    time_t newTime = now + (60* Minutes);
    char* StopTimer = ctime(&newTime);
    cout << "NewTime: " << StopTimer << endl;
    do
    {
    
        //Тут будет код


    now = time(0);
    } while (newTime > now);
    cout << "stop";
    return true;
}

int main(int argc, char* argv[]) {
    
    //plaingGame();
    setlocale(0, "");
    menu();
    system("pause");
    return 0;
}
