#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>
using namespace std;


short HIGHT = 3;  // Высота
short WIDGTH = 3; // Длинна

short choiseColorX = 0; // Цвет для крестиков
short choiseColor0 = 0; // Цвет для ноликов

bool pc_Plaing = true; // Играет компьютер

short step = -1; // Ход, который сейчас (-1 первый игрок), 0 второй игрок.
                 // В случае с пк 0 - это комп; -1 - человек
                 // Если установить STEP на 0, то первым будет ходить второй игрок (нолик).

char simvolPlay1 = 'X'; // Символ, которым ходит первый игрок
char simvolPlay2 = '0'; // Символ, который ходит второй игрок

short** playingField;
//short playingField[HIGHT][WIDGTH] = { {1,2,3},{4,5,6},{7,8,9} };

void printGame();
void menu();
void settings(); 

void clear() {
    system("cls");
}


// ----- *КОД ИГРЫ
 

// ----- Провека победы -----
char checkWin() {
    char win = '0'; // D - Draw (Ничья); H - Human (Человек); P - PC (Компьютер)
    short sum = 0;

    // Если все ячейки забиты даем ничью
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WIDGTH; j++) {
            sum += playingField[i][j];
        }
    }
    if (sum <= 0) {
        win = 'D';
    }

    // Проверяем победу построчно
    for (int i = 0; i < HIGHT; i++) {
        short count_x = 0; // Подсчет в строке HUMAN
        short count_0 = 0; // Подсчет в строке PC
        for (int j = 0; j < WIDGTH; j++) {
            if (playingField[i][j] == -1)
                count_x++;
            if (playingField[i][j] == 0)
                count_0++;
        }
        if (count_0 == WIDGTH) {
            win = 'P';
            break;
        }
        if (count_x == WIDGTH) {
            win = 'H';
            break;
        }
    }
    // Проверяем победу по вертикали
    for (int j = 0; j < WIDGTH; j++) {
        short count_x = 0; //подсчет в строке X
        short count_0 = 0; //подсчет в строке O
        for (int i = 0; i < HIGHT; i++) {
            if (playingField[i][j] == -1)
                count_x++;
            if (playingField[i][j] == 0)
                count_0++;
        }
        if (count_0 == HIGHT) {
            win = 'P';
            break;
        }
        if (count_x == HIGHT) {
            win = 'H';
            break;
        }
    }
    // Проверяем победу по диагонали [\]
    short count_x = 0; //подсчет в строке X
    short count_0 = 0; //подсчет в строке O
    for (int i = 0; i <= WIDGTH - 1; i++) {
        if (playingField[i][i] == -1)
            count_x++;
        if (playingField[i][i] == 0)
            count_0++;
        if (count_0 == HIGHT) {
            win = 'P';
            break;
        }
        if (count_x == HIGHT) {
            win = 'H';
            break;
        }
    }
    // Проверяем победу по диагонали [/]
    count_x = 0; //подсчет в строке X
    count_0 = 0; //подсчет в строке O
    for (int i = 1; i <= WIDGTH; i++) {
        if (playingField[i - 1][WIDGTH - i] == -1)
            count_x++;
        if (playingField[i - 1][WIDGTH - i] == 0)
            count_0++;
        if (count_0 == HIGHT) {
            win = 'P';
            break;
        }
        if (count_x == HIGHT) {
            win = 'H';
            break;
        }
    }
    return win;
}


// ----- Эмуляция шага робота -----
void simulateStepPC() {
    short index = -10;
    bool warn = false;

    for (int i = 0; i < HIGHT; i++) {
        short count_x_string = 0; // Счётчик крестиков
        for (int j = 0; j < WIDGTH; j++) {
            // ДОПИСАТЬ [Такую же проверку надо заумутить и для вертикалей]
            if (playingField[i][j] == -1) { // Проверяем опасность проигрыша в строке ХХ- или -ХХ или Х-Х
                count_x_string++;
            }
            if (playingField[i][j] > 0) { // Если нашлась свободная ячейка, запоминаем ее как кандитата на ход
                index = playingField[i][j];
            }
        }
        if (count_x_string >= HIGHT - 1 and index > 0) { // Считаем позицию потенциально опасной и выходим из массива (если 3 клетка свободна, алгоритм её уже записал в индекс)
            warn = true;
            break;
        }
    }
    if (!warn) {
        for (int j = 0; j < WIDGTH; j++) {
            short count_x_string = 0; // Счётчик крестиков
            for (int i = 0; i < HIGHT; i++) {
                // ДОПИСАТЬ [Такую же проверку надо заумутить и для вертикалей]
                if (playingField[i][j] == -1) {//проверяем опасность проигрыша в строке ХХ- или -ХХ или Х-Х
                    count_x_string++;
                }
                if (playingField[i][j] > 0) { // Если нашлась свободная ячейка, запоминаем ее как кандитата на ход
                    index = playingField[i][j];
                }
            }
            if (count_x_string >= HIGHT - 1 and index > 0) { // Считаем позицию потенциально опасной и выходим из массива (если 3 клетка свободна, алгоритм её уже записал в индекс)
                warn = true;
                break;
            }
        }
    }


    //Ищем данный индекс на поле и заполняем его.
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WIDGTH; j++) {
            if (playingField[i][j] == index)
                playingField[i][j] = 0; // Ставим нолик
        }
    }
    checkWin(); //Сразу после хода проверяю победу, что бы ПК лишний раз не походил
    step = -1; //Меняю ход на первого игрока
}

// ----- Очистка игрового поля -----
void ResetPlayingField() {
    playingField = new short* [WIDGTH];
    for (int i = 0; i < WIDGTH; i++)
        playingField[i] = new short[HIGHT];
    short count = 1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WIDGTH; j++) {
            playingField[i][j] = count;
            count++;
        }
    }
}

// ----- Процесс игры -----
void plaing() {
    if (checkWin() == 'H') {
        printGame();
        cout << "\n\x1b[31m--------------------\x1b[0m\n";
        cout << "\n\x1b[32mПобеду одержал игрок, который играл за: \x1b[91m" << simvolPlay1 << "\x1b[0m\n";
        system("pause");
        menu();
    }
    else if (checkWin() == 'P') {
        printGame();
        cout << "\n\x1b[31m--------------------\x1b[0m\n";
        cout << "\n\x1b[32mПобеду одержал игрок, который играл за: \x1b[91m" << simvolPlay1 << "\x1b[0m\n";
        system("pause");
        menu();
    }
    else if (checkWin() == 'D') {
        printGame();
        cout << "\n\x1b[31m--------------------\x1b[0m\n";
        cout << "\n\x1b[32mНичья\x1b[0m\n";
        system("pause");
        menu();
    }
    if (step == 0 and pc_Plaing) {
        simulateStepPC();
        cout << step;
    }
    printGame();
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nСделайте ваш ход, выберите свободную ячейку: \x1b[0m";
    short index = 0; cin >> index;
    //Ищем данную ячейку
    bool error = true; // Индентификатор ошибки
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WIDGTH; j++) {
            if (playingField[i][j] == index) {
                error = false;
                playingField[i][j] = step; // Cтавим step, если такая ячейка есть. step имеет значение 0 - (второй игрок) или -1 - (первый игрок)
                step == 0 ? step = -1 : step = 0; // Меняем ход на другого игрока
            }
        }
    }
    // Если поиск был неуспешен. Такой ячейки нет, выдаем сообщение
    if (error) {
        cout << "\n\x1b[91mТакой ячейки не было обноруженно, выберите другую\n\x1b[0m";
        system("pause");
    } // Переключаем ход на другого игрока
    plaing();
}

void printGame() {
    clear();
    cout << "\a\n\n***  \"Игра\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";

    //Верхняя граница
    //for (int i = 0; i < HIGHT*WIDGTH; i++) {
    //    cout << "\x1b[96m-";
    //}
    cout << "\n\t";

    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WIDGTH; j++) {
            cout << "\x1b[96m";
            cout << "|";
            cout << "\x1b[0m";
            if (playingField[i][j] > 0)
                cout << " " << playingField[i][j] << " ";
            else
                if (playingField[i][j] == -1)
                    cout << " " << "\x1b[9" << choiseColorX << "m" << simvolPlay1 << "\x1b[0m" << " ";
                else
                    cout << " " << "\x1b[9" << choiseColor0 << "m" << simvolPlay2 << "\x1b[0m" << " ";
            if (playingField[i][j] < 10 and HIGHT * WIDGTH>9) cout << " ";// Выравнить  поле в случае, когда есть числа | 9  | 10 |
        }
        cout << "\x1b[96m|\x1b[0m\n\t";
        ////Нижняя и промежуточная границы
        //for (int k = 0; k < HIGHT*WIDGTH; k++) {
        //    cout << "\x1b[96m-";
        //}
        cout << "\n\t";
    }
    cout << "\x1b[0m";
}
// ----- *КОД ИГРЫ

void playerColor() {
    clear();
    short condition;
    cout << "\n\n***  \"Настройка цвета\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";
    cout << "[0] - \x1b[0m Серый \n\x1b[0m"
            "[1] - \x1b[91m Красный \n\x1b[0m"
            "[2] - \x1b[92m Зеленый \n\x1b[0m"
            "[3] - \x1b[93m Желтый \n\x1b[0m"
            "[4] - \x1b[94m Синий \n\x1b[0m"
            "[5] - \x1b[95m Розовый \n\x1b[0m";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите цвет для крестиков: "; cin >> condition;
    if (condition >= 0 and condition <= 5)  choiseColorX = condition; else cout << "Такого цвета нет";
    cout << "\nВыберите цвет для ноликов: "; cin >> condition;
    if (condition >= 0 and condition <= 5) choiseColor0 = condition; else cout << "Такого цвета нет";
}

void setSize() {
    clear();
    cout << "\n\n***  \"Настройка поля\"  ***\t\t\t\n";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\n[1] 3x3";
    cout << "\n[2] 4x4";
    cout << "\n[3] 5x5";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        settings();
        break;
    case 1:
        HIGHT = 3; WIDGTH = 3;
        cout << "Поле 3 на 3 установленно";
        break;
    case 2:
        HIGHT = 4; WIDGTH = 4;
        cout << "Поле 4 на 4 установленно";
        break;
    case 3:
        HIGHT = 5; WIDGTH = 5;
        cout << "Поле 5 на 5 установленно";
        break;
    default:
        cout << "Попробуй еще раз";
        break;
    }
    system("pause");
}

void choiseSimvolPlay() {
    clear();
    cout << "\n\n***  \"Настройка символа\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m";
    cout << "\n[1] Крестик";
    cout << "\n[2] Нолик";
    cout << "\n\x1b[31m--------------------\x1b[0m";
    cout << "\nВыберите за кого будете играть: "; 
    short  condition; cin >> condition;
    switch (condition) {
    case 1:
        simvolPlay1 = 'X';
        simvolPlay2 = 'O';
        step = -1;
        cout << "\nВы играете за крестик [X]\n";
        break;
    case 2:
        simvolPlay1 = 'O';
        simvolPlay2 = 'X';
        step = 0;
        cout << "\nВы играете за нолик [O]\n";
        break;
    }
    system("pause");
}

void rules() {
    clear();
    cout << "\n\n***  \"Правила\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m\n";
    cout << "Перед вами пронумерованное поле из N ячеек, каждая ячейка пронумерована от 1 до N. \n Вы делаете ход первым, после чего ход делает компьютер. \n "
            "Что бы сделать ход, вам необходимо выбрать одну из ячеек. После этого ячейка на поле будет закрашена вашим знаком [X]. \n "
            "Для выигрыша - необходимо первее компьютера заполнить ячейки в ряд своим знаком. \n Знак компьютера - [O]. \n Приятной игры; \n";
    cout << "\x1b[31m--------------------\x1b[0m\n\n";
    system("pause");
    clear();
    menu();
}

void settings() {
    clear();
    cout << "\n\n***  \"Настройки\"  ***\t\t\t\n";
    cout << "\x1b[31m--------------------\x1b[0m";
    cout << "\n[1] Выбрать цвет для знаков";
    cout << "\n[2] Выбрать кем ходить";
    cout << "\n[3] Выбрать размер доски";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short condition; cin >> condition;
    switch (condition) {
    case 0:
        menu();
        break;
    case 1:
        playerColor();
        break;
    case 2:
        choiseSimvolPlay();
        break;
    case 3:
        setSize();
        break;
    default:
        clear();
        break;
    }
    menu();
}

void menu() {
    //for(int i = 0; i < 255; i++){
    //    cout<<"\x1b["<<i<<"mTEST -"<<i<<"\n";
    //}
    // 31-Red; 32-Green, 33-Yellow, 34-Blue, 35-Purple; 36-Cyan [or 91-96]

    clear();
    cout << "\a\n\n***Приветствуем Вас в программе — \"Крестики - Нолики\"***\t\t\t\n";
    cout << "\x1b[31m————————————————————————————————————————————————————————\x1b[0m";
    cout << "\n[1] Играть";
    cout << "\n[2] Настройки";
    cout << "\n[3] Правила";
    cout << "\n\n[0] Выход";
    cout << "\n\x1b[31m--------------------\x1b[0m\n";
    cout << "\nВыберите действие: ";
    short decision; cin >> decision;
    switch (decision) {
    case 0:
        break;
    case 1:
        ResetPlayingField();
        clear();
        cout << "\n\n***  \"Выбор соперника\"  ***\t\t\t\n"
                "\x1b[31m--------------------\x1b[0m"
                "\n[1] Играть одному"
                "\n[2] Играть с другом"
                "\n\n[0] Выход"
                "\n\x1b[31m--------------------\x1b[0m\n"
                "\nВыберите действие: ";
        short condition; cin >> condition;
        switch (condition) {
        case 0:
            clear();
            menu();
        case 1:
            pc_Plaing = true;
            break;
        case 2:
            pc_Plaing = false;
            break;
        }
        printGame();
        plaing();
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
    delete[] playingField; // Динамический необходимо у
    return 0;
}
