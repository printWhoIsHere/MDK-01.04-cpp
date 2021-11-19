//#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>
#include <string>

//#include <ctime>
//#include <ratio>
//#include <chrono>
//Таймер только на вопрос (~1 мин на вопрос)

//#include <thread> // Библиотека многопоточности - https://nuancesprog.ru/p/5452/ 

using namespace std;

int numberOfQuestions = 15;
int countOfAttempts = 3;



void menu();
void settings();

void clear() {
    system("cls");
}


// КОД ВИКТОРИНЫ


// ----- Меню Викторины -----
struct Question {
    string question;
    string wrongAnswers[3];
    string rightAnswer;
};

Question questions[20] = {
    // {"Вопрос", { 1-ответ, 2-ответ, 3-ответ, 4-ответ }, правильный ответ}

};

void wrongAnswer() {
    clear();

    /* вычет 1 попытки */

    cout << "Неверный ответ || Осталось попыток: " << /* Вычет 1 попытки */ "\n";
    Sleep(2000);
}



// 50:50
void fifityFifty() {
    
}

// Добавление ответа на вопрос
void addAUsedQuestion() {

}

//Рандомизация вопроса
int randomizeQuestion() {

}

//Проверка ответа
bool checkAnswer() {

}

//Меню игры
char quizMenu() {
    clear();

   

    //cout << "\n Вопрос " + to_string() + " / " + to_string();
    //cout << "\n Попыток осталось: " + to_string() << "\n";
    //cout << /* Вопрос */ << "\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";

}

// Логика игры
void play() {
    clear();

}

// *КОД ВИКТОРИНЫ

void rules() {
    clear();
    cout << "\n\n***  \"Правила\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";
    cout << " Правила просты. \n Приятной игры; \n";
    cout << "\x1b[31m--------------------\x1b[0m\n\n";
    system("pause");
    clear();
    menu();
}

void settings() {
    clear();
    cout << "\n\n***  \"Настройки\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m";
    cout << "\n[1] Выбрать кол-во вопросов";
    cout << "\n[2] Выбрать кол-во попыток";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        menu();
        break;
    case 1:
        clear();
        cout << "\n\n***  \"Кол-во вопросов\"  ***\t\t\t\n";
        cout << "\x1b[31m--------------------\x1b[0m\n";
        cout << "[1] 5 вопросов\n";
        cout << "[2] 10 вопросов\n";
        cout << "[3] 15 вопросов\n\n";
        cout << "[0] Вернуться назад\n";
        cout << "\n\x1b[31m--------------------\x1b[0m\n";
        cin >> condition;
        switch (condition)
        {
        case 1:
            /* Изменение переменной вопросов на 5 */
            settings();
            break;
        case 2:
            /* Изменение переменной вопросов на 10 */
            settings();
            break;
        case 3:
            /* Изменение переменной вопросов на 15 */
            settings();
            break;
        default:
            clear();
            cout << "404 Not Found";
            settings();
            break;
        }
        break;
    case 2:
        clear();
        cout << "\n\n***  \"Кол-во попыток\"  ***\t\t\t\n";
        cout << "\x1b[31m--------------------\x1b[0m\n";
        cout << "Выберите количество попыток от 1 до 5: ";
        cin >> countOfAttempts;
        while (countOfAttempts <= 1 || countOfAttempts >= 5) {
            clear();
            cout << "Попыток лишь от 1 до 5. Повторите ввод -> ";
            cin >> countOfAttempts;
        }
        /* Изменение переменной попыток на 10 вопросов */
        settings();
        break;
    default:
        clear();
        cout << "404 Not Found";
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
        play();
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


// ----- Таймер -----
//bool plaingGame(time_t time_rel) {
//
//    time_t now = time(0);
//    // convert now to string form
//    char* startTime = ctime(&now);
//    cout << "The local date and time is: " << startTime << endl;
//    size_t Minutes = 1;
//    time_t newTime = now + (60 * Minutes);
//    char* StopTimer = ctime(&newTime);
//    cout << "NewTime: " << StopTimer << endl;
//    do
//    {
//
//        //Тут будет код
//
//
//        now = time(0);
//    } while (newTime > now);
//    cout << "stop";
//    return true;
//}

int main(int argc, char* argv[]) {

    //plaingGame();
    setlocale(0, "");
    menu();
    system("pause");
    return 0;
}
