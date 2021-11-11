#include <iostream>
#include <ctime>
#include <string>
using namespace std;

short condition, step = -1, boardSize, gameSelection;
const short SIZE = 3;
short playingField[SIZE][SIZE] = { {1,2,3},{4,5,6},{7,8,9} };

void clear();
void menu();
void settings();
void board();
void playing();

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
        //       cin >> step;
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


// Код игры  -----------------------------------------

int getMove()
{
    cout << "\n\tВаш ход: ";
    int move;
    cin >> move;
    while (move > 9 || move < 1)
    {
        cout << "Error! Такого хода нет!";
        getMove();
    }
    return move;
}

char checkWin() {
    char win = '0';
    // ДОПИСАТЬ if если все равны (через цикл), то ничья
    if ((((playingField[0][0] == -1 and playingField[0][1] == -1 and playingField[0][2] == -1) or (playingField[1][0] == -1 and playingField[1][1] == -1 and playingField[1][2] == -1) or 
          (playingField[2][0] == -1 and playingField[2][1] == -1 and playingField[2][2] == -1)) or ((playingField[0][0] == -1 and playingField[1][0] == -1 and playingField[2][0] == -1) or 
          (playingField[0][1] == -1 and playingField[1][1] == -1 and playingField[2][1] == -1) or (playingField[0][2] == -1 and playingField[1][2] == -1 and playingField[2][2] == -1)) or 
          (playingField[0][0] == -1 and playingField[1][1] == -1 and playingField[2][2] == -1) or (playingField[0][2] == -1 and playingField[1][1] == -1 and playingField[2][0] == -1))) {
        win = 'H'; // Человек
    }
    if ((((playingField[0][0] == 0 and playingField[0][1] == 0 and playingField[0][2] == 0) or (playingField[1][0] == 0 and playingField[1][1] == 0 and playingField[1][2] == 0) or 
          (playingField[2][0] == 0 and playingField[2][1] == 0 and playingField[2][2] == 0)) or ((playingField[0][0] == 0 and playingField[1][0] == 0 and playingField[2][0] == 0) or 
          (playingField[0][1] == 0 and playingField[1][1] == 0 and playingField[2][1] == 0) or (playingField[0][2] == 0 and playingField[1][2] == 0 and playingField[2][2] == 0))) or 
          (playingField[0][0] == 0 and playingField[1][1] == 0 and playingField[2][2] == 0) or (playingField[0][2] == 0 and playingField[1][1] == 0 and playingField[0][2] == 0)) {
        win = 'P'; // PC компьютер
    }
    return win;
}

void simulateStepPC() {
    short index = -10;
    bool warn = false;
    for (int i = 0; i < SIZE; i++) {
        short count_x_string = 0; // Счётчик крестиков
        for (int j = 0; j < SIZE; j++) {
            // ДОПИСАТЬ [Такую же проверку надо заумутить и для вертикалей]
            if (playingField[i][j] == -1) { // Проверяем опасность проигрыша в строке ХХ- или -ХХ или Х-Х
                count_x_string++;
            }
            if (playingField[i][j] > 0) { // Если нашлась свободная ячейка, запоминаем её как кандитата на ход
                index = playingField[i][j];
            }
        }
        if (count_x_string >= 2 and index > 0) { // Считаем позицию потенциально опасной и выходим из массива (если 3 клетка свободна, алгоритм её уже записал в индекс)
            warn = true;
            break;
        }
    }
    if (!warn) {
        for (int j = 0; j < SIZE; j++) {
            short count_x_string = 0; // Счётчик крестиков
            for (int i = 0; i < SIZE; i++) {
                // ДОПИСАТЬ [Такую же проверку надо заумутить и для вертикалей]
                if (playingField[i][j] == -1) { // Проверяем опасность проигрыша в строке ХХ- или -ХХ или Х-Х
                    count_x_string++;
                }
                if (playingField[i][j] > 0) { // Если нашлась свободная ячейка, запоминаем её как кандитата на ход
                    index = playingField[i][j];
                }
            }
            if (count_x_string >= 2 and index > 0) { // Считаем позицию потенциально опасной и выходим из массива (если 3 клетка свободна, алгоритм её уже записал в индекс)
                warn = true;
                break;
            }
        }
    }
    // Ищем данный индекс
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (playingField[i][j] == index)
                playingField[i][j] = 0; // Ставим нолик
        }
    }
    playing();
}

void ResetPlayingField() {
    short count = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            playingField[i][j] = count;
            count++;
        }
    }
}


// Процесс игры
void playing()
{
    clear();
    board();
    int move = getMove();
    bool checkCorrect = false;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (playingField[i][j] == move and playingField[i][j] > 0)
            {
                playingField[i][j] = step; // -1 — крестик; 0 — нолик
                checkCorrect = true;
            }
        }
    }
    if (!checkCorrect) {
        cout << "Error! Такого хода нет!\n";
        system("pause");
    }
    if (checkWin() == 'P')
    {
        cout << "\n\t-------------\n";
        cout << "\tПобедили О\n\n";
        system("pause");
        ResetPlayingField();
    }
    else if (checkWin() == 'H')
    {
        cout << "\n\t-------------\n";
        cout << "\tПобедили Х\n\n";
        system("pause");
        ResetPlayingField();
    }
    // ДОПИСАТЬ [else if (ничья) {};]
    else if (checkWin() == 'D')
    {
        cout << "\t-------------\n";
        cout << "\tНичья!\n\n";
        system("pause");
        ResetPlayingField();
    }
    else {
        if (step == -1)
            step = 0;
        else
            step = -1;
        if (gameSelection == 1)
            playing();
        else
            simulateStepPC();
    }
}

void board()
{
    cout << "\n\n";
    cout << "\t\t***  \"Игра\"  ***\t\t\t\n\n";
    cout << "\tExample of\t-------------\n";
    cout << "\tnumbering:\t| 1 | 2 | 3 |\n";
    cout << "\t\t\t| 4 | 5 | 6 |\n";
    cout << "\t\t\t| 7 | 8 | 9 |\n";
    cout << "\t\t\t-------------\n\n";

    // ПЕРЕПИСАТЬ [Изменить на массив] — необходимо для последущей работы с большими полями
    cout << "\tGame:\t\t-------------\n ";
    cout << "\t\t\t" << "| " << playingField[0][0] << " | " << playingField[0][1] << " | " << playingField[0][2] << " |\n";
    cout << "\t\t\t" << "| " << playingField[1][0] << " | " << playingField[1][1] << " | " << playingField[1][2] << " |\n";
    cout << "\t\t\t" << "| " << playingField[2][0] << " | " << playingField[2][1] << " | " << playingField[2][2] << " |\n";
    cout << "\t\t\t-------------\n";
}

int game()
{
    clear();
    cout << "\n\n***  \"Игра\"  ***\t\t\t\n\n";
    cout << "[1] Играть с другом\n";
    cout << "[2] Играть одному\n\n";
    cout << "[0] Выход\n";
    cout << "--------------------\n";
    cout << "\n\aВыберите действие: ";
    cin >> gameSelection;
    if (gameSelection == 1)
        playing();
    else if (gameSelection == 2)
        simulateStepPC();
    else
    {
        clear();
        menu();
    }
    return 0;
}
// *Код игры -----------------------------------------

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
        case 1:
            game();
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
