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
using namespace std;

int numberOfQuestions = 15;
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
struct Question {
    string question;
    string wrongAnswers[3];
    string rightAnswer;
};

Question questions[20] = {
    // {"Вопрос", { 1-ответ, 2-ответ, 3-ответ, 4-ответ }, правильный ответ}

};

int previousQuestions[20];

void wrongAnswer() {
    clear();
    if (amountOfAttempts == 0) {
        return;
    }
    cout << "Неверный ответ || Осталось попыток: " << to_string(amountOfAttempts) << "\n";
    Sleep(2000);
}

void endGame(string mode) {
    clear();

    if (mode == "win") {
        cout << "Вы выйграли викторину, поздравляю!";
    }
    else if (mode == "lose") {
        cout << "Попытки исчерпаны.";
    }
}

void success(string option, string status) {
    clear();
    cout << "Успешное изменение настройки\n";
    cout << option + " теперь " + status << "\n";
    Sleep(2000);
}

void fifityFifty(int currentQuestion) {
    string totalAnswers[4] = { questions[currentQuestion].wrongAnswers[0],
                            questions[currentQuestion].wrongAnswers[1],
                            questions[currentQuestion].wrongAnswers[2],
                            questions[currentQuestion].rightAnswer };

    int wrong1 = -1, wrong2 = -1;

    for (int i = 0; i < 2; i++) {
        int randDestroy = rand() % 4;
        while (totalAnswers[randDestroy] == questions[currentQuestion].rightAnswer || randDestroy == wrong1) {
            randDestroy = rand() % 4;
        }
        if (i == 0) {
            wrong1 = randDestroy;
        }
        else {
            wrong2 = randDestroy;
        }
    }
    cout << "Неправильные ответы: \"" + questions[currentQuestion].wrongAnswers[wrong1] + "\" и \"" + questions[currentQuestion].wrongAnswers[wrong2] + "\"\n";
}

void addAUsedQuestion(int questionIndex) {
    for (int i = 0; i < 20; i++) {
        if (previousQuestions[i] == NULL) {
            previousQuestions[i] = questionIndex;
            return;
        }
    }
}

int randomizeQuestion() {
    int questionIndex = rand() % 20;

    for (int i = 0; i < 20; i++) {
        if (previousQuestions[i] == questionIndex) {
            questionIndex = rand() % 20;
            i = 0;
        }
    }

    addAUsedQuestion(questionIndex);

    return questionIndex;
}

bool checkAnswer(int answer, int answers[4]) {
    for (int i = 0; i < 4; i++) {
        if (answer == answers[i]) {
            return false;
        }
    }

    return true;
}

char displayQuestionAndGetTheRightAnswer(int currentQuestionNumber, int currentQuestion) {
    clear();

    int randomizedAnswer, randomizedAnswers[4];
    string totalAnswers[4] = { questions[currentQuestion].wrongAnswers[0],
                            questions[currentQuestion].wrongAnswers[1],
                            questions[currentQuestion].wrongAnswers[2],
                            questions[currentQuestion].rightAnswer };
    char rightAnswer;

    cout << "\nВопрос " + to_string(currentQuestionNumber) + " / " + to_string(numberOfQuestions);
    cout << "\nПопыток осталось: " + to_string(amountOfAttempts) << "\n";
    cout << questions[currentQuestion].question << "\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";
    for (int i = 0; i < 4; i++) {
        switch (i)
        {
        case 0:
            randomizedAnswer = rand() % 4;
            cout << "a. " + totalAnswers[randomizedAnswer] << "\n";
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'a';
            }
            randomizedAnswers[0] = randomizedAnswer;
            break;
        case 1:
            randomizedAnswer = rand() % 4;
            while (!checkAnswer(randomizedAnswer, randomizedAnswers)) {
                randomizedAnswer = rand() % 4;
            }
            cout << "b. " + totalAnswers[randomizedAnswer] << "\n";
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'b';
            }
            randomizedAnswers[1] = randomizedAnswer;
            break;
        case 2:
            randomizedAnswer = rand() % 4;
            while (!checkAnswer(randomizedAnswer, randomizedAnswers)) {
                randomizedAnswer = rand() % 4;
            }
            cout << "c. " + totalAnswers[randomizedAnswer] << "\n";
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'c';
            }
            randomizedAnswers[2] = randomizedAnswer;
            break;
        case 3:
            randomizedAnswer = rand() % 4;
            while (!checkAnswer(randomizedAnswer, randomizedAnswers)) {
                randomizedAnswer = rand() % 4;
            }
            cout << "d. " + totalAnswers[randomizedAnswer] << "\n";
            if (totalAnswers[randomizedAnswer] == questions[currentQuestion].rightAnswer) {
                rightAnswer = 'd';
            }
            randomizedAnswers[3] = randomizedAnswer;
            break;
        }
    }

    return rightAnswer;
}

void play() {
    clear();

    int currentQuestionNumber = 1;
    char answer, rightAnswer;

    while (amountOfAttempts > 0 && currentQuestionNumber < numberOfQuestions) {
        int currentQuestion = randomizeQuestion();
        rightAnswer = displayQuestionAndGetTheRightAnswer(currentQuestionNumber, currentQuestion);
        cin >> answer;
        if (answer == rightAnswer) {
            currentQuestionNumber++;
        }
        else if (answer == 'h') {
            fifityFifty(currentQuestion);

            cin >> answer;
            if (answer == rightAnswer) {
                currentQuestionNumber++;
            }
            else {
                amountOfAttempts--;
                wrongAnswer();
            }
        }
        else {
            amountOfAttempts--;
            wrongAnswer();
        }
    }

    if (amountOfAttempts <= 0) {
        endGame("lose");
    }
    else {
        endGame("win");
    }

    exit(2);
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
        cout << "[5] 5 вопросов\n";
        cout << "[10] 10 вопросов\n";
        cout << "[15] 15 вопросов\n\n";
        cout << "[0] Вернуться назад\n";
        cout << "\n\x1b[31m--------------------\x1b[0m\n";
        cin >> condition;
        switch (condition)
        {
        case 5:
        case 10:
        case 15:
            numberOfQuestions = condition;
            success("Количество вопросов", to_string(numberOfQuestions));
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
        cin >> amountOfAttempts;
        while (amountOfAttempts <= 0 || amountOfAttempts > 5) {
            clear();
            cout << "Попыток лишь от 1 до 5. Повторите ввод -> ";
            cin >> amountOfAttempts;
        }
        success("Количество попыток", to_string(amountOfAttempts));
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
