#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <windows.h>
#include <sstream>
//#include <cmath>
#include <string>
#include <ctime>
//#include <ratio>
//#include <chrono>
//Таймер только на вопрос (~1 мин на вопрос)
using namespace std;

size_t Minutes = 1; //сколько минут отведем на игру
int numberOfQuestions = 15;
int countOfAttempts = 3;

void menu();
void settings();
bool playingGame();

bool playingGame(time_t i);

void clear() {
    system("cls");
}

// Вопросы
string Answer[17][2] = {
        {"Сколько спутников у Марса?\n [1] - 1\n [2] - 2\n [3] - 3\n [4] - 4","2"},
        {"Сколько часовых поясов в России?\n [1] - 11\n [2] - 12\n [3] - 13\n [4] - 14","1"},
        {"Самый большой вулкан Солнечной системы называется «Гора Олимп». Где он находится?\n [1] - Юпитер\n [2] - Земля\n [3] - Венера\n [4] - Марс","4"},
        {"Какая планета ближе всех расположена к Солнцу?\n [1] - Меркурий\n [2] - Земля\n [3] - Юпитер\n [4] - Венера","1"},\
        {"Большое красное пятно на Юпитере, что это?\n [1] - Буря\n [2] - Озеро\n [3] - Вулкан\n [4] - Кратор","1"},
        {"Из чего в основном состоит Солнце?\n [1] - Расплавленный метал\n [2] - Плазма\n [3] - Жидкий газ\n [4] - Из счастья","2"},
        {"Из чего в основном состоят кометы?\n [1] - Ядовитые жидкости\n [2] - Лед и пыль\n [3] - Ржавый метал\n [4] - Камень","2"},
        {"К какой планете принадлежат спутники Оберон и Титания?\n [1] - Юпитер\n [2] - Уран\n [3] - Венера\n [4] - Земля","2"},
        {"Какой из вариантов лучше всего описывает атмосферу, окружающую Венеру?\n [1] - Яркое и солнечное\n [2] - Холодное и снижное\n [3] - Холодная и влажная\n [4] - Ядовитая","4"},
        {"Где находится пояс астероидов?\n [1] - Между Юпитером и Сатурном\n [2] - Между Землей и Венерой\n [3] - Между Марсом и Юпитером\n [4] - Между Землей и Марсом","3"},
        {"Какая из этих планет самая маленькая?\n [1] - Юпитер\n [2] - Уран\n [3] - Земля\n [4] - Меркурий","4"},
        {"Какие две планеты вращаются в обратном направлении от остальных?\n [1] - Уран и Венера\n [2] - Венера и Плутон\n [3] - Меркурий и Юпитер\n [4] - Земля и Нептун","1"},
        {"Назовите самую длинную реку в мире?\n [1] - Нил\n [2] - Амазонка\n [3] - Волга\n [4] - Миссисипи","1"},
        {"Какая страна самая новая в мире, признанная в ООН?\n [1] - Алжир\n [2] - Арабские Эмираты\n [3] - Уагвей\n [4] - Южный Судан","4"},
        {"Ежесуточно Земля прибавляет в весе 400 тонн. За счет чего?\n [1] - За счёт людей\n [2] - За счёт отходов\n [3] - За счёт космической пыли\n [4] - За счёт еды после 6","3" },
        {"Где текут реки без воды?\n [1] - В космосе\n [2] - На картах\n [3] - В пустыне\n [4] - В горах", "2"},
        {"Какая валюта Швеции?\n [1] - Шведэн\n [2] - Шведская крона\n [3] - Доллар\n [4] - Шведский франк", "2"}
};

// Подсказка 50:50
void help_draw(int indexAnswer) {
    short indexFakeOtvet = 1 + rand() % 4;
    const char* relAnswerString = Answer[indexAnswer][1].c_str();
    int relAnswerInt = atoi(relAnswerString);
    while (indexFakeOtvet == relAnswerInt) {
        indexFakeOtvet = 1 + rand() % 4;
    }
    cout << "\n Ответ: " << Answer[indexAnswer][1] << " или " << indexFakeOtvet << "\n";
}

// Рандомизация вопроса
void randomizeQuestion() {
    srand(time(NULL));
    for (int i = 0; i < sizeof(Answer) / sizeof(Answer[0]); i++) {
        short randAnswer = rand() % (sizeof(Answer) / sizeof(Answer[0]));
        swap(Answer[i][0], Answer[randAnswer][0]);
        swap(Answer[i][1], Answer[randAnswer][1]);
    }
}

void rules() {
    clear();
    cout << "\n\n***  \"Правила\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";
    cout << " Правила просты. \n Приятной игры " << static_cast<char>(2) << "\n";
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
    cout << "\n[3] Выбрать время игры";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        menu();
        break;
    case 3:
        cout << "\nВведите, количество минут которые будет длится игра:";
        cin >> Minutes;
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
            numberOfQuestions = 5;
            settings();
            break;
        case 2:
            /* Изменение переменной вопросов на 10 */
            numberOfQuestions = 10;
            settings();
            break;
        case 3:
            /* Изменение переменной вопросов на 15 */
            numberOfQuestions = 15;
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
        cout << "Выберите количество жизей от 1 до 5: ";
        short condition;
        cin >> condition;
        if (condition < 1 || condition > 5) {
            cout << "Жизей лишь от 1 до 5. Повторите ввод -> ";
            cin >> countOfAttempts;
        }
        else {
            countOfAttempts = condition;
        }
        settings();
        break;
    default:
        clear();
        cout << "404 Not Found";
        break;
    }
    menu();
}
void play() {
    clear();
    int sum = 0;
    time_t now = time(0);
    short fifityFifty = 0;
    time_t stopPlayTime = now + (60 * Minutes);  //Когда закончить игру
    for (int i = 0; i < numberOfQuestions and countOfAttempts>0 and playingGame(stopPlayTime); i++) {
        Sleep(1000);
        clear();
        cout << "\n\x1b[36mУ вас осталось: " << countOfAttempts << " жизней\x1b[0m\n";
    goAnswer:
        string condition;
        if (fifityFifty == 1) {
            help_draw(i);
            fifityFifty = 3;
        }
        else if (fifityFifty == 0)
            cout << "\x1b[36mЧто бы использовать подсказку напишите: \"50/50\"\x1b[0m\n";
        cout << "\n\x1b[31m--------------------\x1b[0m\n";
        cout << Answer[i][0] << "\n\x1b[31m--------------------\x1b[0m\nВведите ответ на вопрос: ";
        cin >> condition;
        if (condition == Answer[i][1]) {
            sum++;
            cout << "\n\x1b[92mВы ответили правильно!\x1b[0m";
        }
        else if (condition == "50/50" and fifityFifty != 3) {
            fifityFifty = 1;
            goto goAnswer;
        }
        else if (condition != "1" and condition != "2" and condition != "3" and condition != "4") {
            cout << "\x1b[91mИграй по правилам, ответ от 1 до 4 должен быть!\x1b[0m\n";
            system("pause");
            clear();
            goto goAnswer;
        }
        else {
            cout << "\n\x1b[91mУвы, ответ не верен \nМинус " << static_cast<char>(3) << "\x1b[0m\n";
            countOfAttempts--;
        }
    }
    cout << "\n\n\n\x1b[91m---------------------------------------------------------------------\n";
    cout << "\t Игра окончена, вы ответили правильно, на \x1b[92m" << sum << "\x1b[91m вопросов из \x1b[92m" << numberOfQuestions;
    cout << "\n\x1b[91m---------------------------------------------------------------------\x1b[0m\n";
}

//timer
bool playingGame(time_t stopTime) {
    char* stopTime2 = ctime(&stopTime);
    cout << "\nИгра закончится в: \n" << stopTime2 << "\n";
    time_t now = time(0);
    if (stopTime > now) {
        // Время осталось еще
        return true;
    }
    // Время нет
    cout << "\n\x1b[91mВремя игры истекло\x1b[0m\n";
    return false;
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
        randomizeQuestion();
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

int main(int argc, char* argv[]) {
    setlocale(0, "");
    menu();
    system("pause");
    return 0;
}
