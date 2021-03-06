#include <iostream>
#include <windows.h>
using namespace std;

char texture;

void clear();
void menu();

void paint_Line() {

    short length, type_line;
    cout << "\n\n--------------------\n\tЛиния\n--------------------\n";
    cout << "[0] Выход в меню\n";
    cout << "--------------------\n";
    cout << "[1] Линия\n";
    cout << "[2] Линия (Вертикальная)\n";
    cout << "[3] Слеш\n";
    cout << "[4] Слеш (Обратный)\n";
    cout << "--------------------\n";
    cout << "Выберите тип: ";
    cin >> type_line;
    cout << "--------------------\n";
    cout << "Введите размер: ";
    cin >> length;

    switch (type_line)
    {
        case 0:
        {
            clear();
            menu();
        }
        case 1:
        {
            while (length > 0)
            {
                cout << "\n\t" << texture << ' ';
                length -= 1;
            }
            cout << "\n"; system("pause"); paint_Line();
            break;
        }
        case 2:
        {
            while (length > 0)
            {
                cout << "\n\t" << texture << ' ' << endl;
                length -= 1;
            }
            cout << "\n"; system("pause"); paint_Line();
            break;
        }
        case 3:
        {
            cout << endl;
            for (int i = length; i > 0; i--)
            {
                cout << "\t";
                for (int j = 0; j <= length; j++)
                {
                    if (i == j)
                    {
                        cout << "\n\t" << texture;
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
                cout << endl;
            }
            cout << "/n"; system("pause"); paint_Line();
            break;
        }
        case 4:
        {
            for (int i = 0; i < length; i++)
            {
                cout << "\t";
                for (int j = 0; j <= length; j++)
                {
                    if (i == j)
                    {
                        cout << "\n\t" << texture;
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
                cout << endl;
            }
            cout << "/n"; system("pause"); paint_Line();
            break;
        }
        default: { clear(); paint_Line(); break; }
    }
}

void paint_Square() {
    cout << "\n\n--------------------\n\tКвадрат\n--------------------\n";
    cout << "Введите длинну стороны: ";
    short shape_size;
    cin >> shape_size;
    cout << "--------------------\n";
    for (int i = 0; i < shape_size; i++)
    {
        cout << "\t";
        for (int j = 0; j < shape_size; j++)
        {
            cout << texture << ' ';
        }
        cout << endl;
    }
    system("pause"); menu();
}
void paint_Rectangle() {
    short width, height;
    cout << "\n\n--------------------\n\tПрямоугольник\n--------------------\n";
    cout << "Введите длину Прямоугольника: ";
    cin >> height;
    cout << "Введите ширину Прямоугольника: ";
    cin >> width;
    cout << "--------------------\n";

    short type_rectangle;
    cout << "\nВыберите тип Прямоугольника: ";
    cout << "\n--------------------\n";
    cout << "\n[1] Заполненный Прямоугольник: ";
    cout << "\n[2] Не заполненный Прямоугольник: ";
    cout << "\n--------------------\nТип: ";
    cin >> type_rectangle;

    switch (type_rectangle) {
    case 1: {
        for (int i = 0; i < width; i++) {
            cout << "\t";
            for (int j = 0; j < height; j++) {
                cout << texture << ' ';
            }
            cout << endl;
        }
        system("pause"); menu(); break;
    }
    case 2: {
        for (int i = 0; i < width; i++) {
            cout << " ";
            for (int j = 0; j < height; j++) {
                if ((i == 0 or i == width - 1) or (j == 0 or j == height - 1))
                    cout << texture;
                else
                    cout << " ";
            }
            cout << endl; paint_Rectangle();
        }

        system("pause"); menu(); break;
    }
    default: {
        clear();
        paint_Rectangle();
        break;
    }
    }
}
void paint_triangle() {

    cout << "\n\n--------------------\n\tТреугольник\n--------------------\n";
    cout << "Введите высоту Треугольника: ";
    short height;
    cin >> height;
    int a = 0;
    for (int i = height; i > 0; i--)
    {
        cout << "\t";
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        for (int i = 0; i <= a * 2; i++)
        {
            cout << texture;
        }
        cout << endl;
        a++;
    }
    system("pause"); menu();
}
void paint_circle() {
    cout << "\n\n--------------------\n\tКруг\n--------------------\n";
    cout << "Введите радиус: ";
    int radius;
    cin >> radius;
    for (int y = radius; y > 0 - radius; y--)
    {
        for (int x = -radius; x <= radius; x++)
        {
            if (((x * x) + (y * y)) <= radius * radius)
                cout << texture;
            else
                cout << " ";
        }
        cout << "\n";
    }
    system("pause"); menu();
}
void paint_plus() {
    cout << "\n\n--------------------\n\tПлюс\n--------------------\n";
    cout << "Введите длину Плюса: ";
    short plus_size;
    cin >> plus_size;
    cout << "--------------------\n";
    for (int i = 0; i < plus_size; i++)
    {
        for (int j = 0; j < plus_size; j++)
        {
            if (j == plus_size / 2 || i == plus_size / 2)
                cout << texture << ' ';
            else
                cout << "  ";
        }
        cout << "\n";
    }
    system("pause"); menu();
}

void paint_Square_in_Square() {
    cout << "--------------------\n\tКвадрат в квадрате\n--------------------\n";
    cout << "Введите длинну стороны: ";
    short shape_size;
    cin >> shape_size;
    cout << "--------------------\n";
    for (int i = 0; i < shape_size; i++)
    {
        for (int j = 0; j < shape_size; j++) {
            if ((min(min(i, shape_size - 1 - i), min(j, shape_size - 1 - j)) % 2) == 0)
                cout << texture << " ";
            else
                cout << "  ";
        }

        cout << endl;

    }
    system("pause"); menu();
}

void paint_Chess_Board() {
    cout << "--------------------\n\tШахматная доска\n--------------------\n";
    cout << "Введите длинну стороны: ";
    short shape_size;
    cin >> shape_size;
    cout << "Введите текстуру доски: \n[2 символа]\n" ;
    char texture_1, texture_2;
    cin >> texture_1 >> texture_2;
    cout << "--------------------\n";
    for (int i = 0; i < shape_size; i++)
    {
        for (int j = 0; j < shape_size; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << texture_1 << " ";
            }
            else
            {
                cout << texture_2 << " ";
            }
        }
        cout << endl;
    }
    system("pause"); menu();
}

void paint_Grid() {
    cout << "--------------------\n\tРешётка\n--------------------\n";
    cout << "Введите длинну стороны: ";
    short shape_size;
    cin >> shape_size;
    cout << "--------------------\n";
    for (int i = 0; i < shape_size - 1; i++)
    {
        for (int j = 0; j < shape_size - 1; j++)
        {
            if (i % 2 == 0 && j % 2 == 0 && i < shape_size - 1 && j < shape_size - 1)
            {
                cout << "  ";
            }
            else
            {
                cout << texture << " ";
            }
        }
        cout << endl;
    }
    system("pause"); menu();
}

void clear() {
    system("cls");
}

void menu() {
    cout << "\a\n\n***Приветствуем Вас в программе — \"Геометрические фигуры\"***\t\t\t\n";
    cout << "--------------------\n";
    cout << "[0] Выход\n";
    cout << "--------------------\n";
    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n";
    cout << "[3] Прямоугольник\n";
    cout << "[4] Треугольник\n";
    cout << "[5] Круг\n";
    cout << "[6] Плюс\n";
    cout << "[7] Квадрат в квадрате\n";
    cout << "[8] Шахматная доска\n";
    cout << "[9] Решётка\n";
    cout << "--------------------\n";
    cout << "\n\aВыберите геометрическую фигуру: ";
    short condition; cin >> condition;
    if (condition != 0 && condition != 8)
    {   
        cout << "--------------------\n";
        cout << "Выберите текстуру для вашей фигуры: ";
        cin >> texture;
    }
    switch (condition) {
        case 0:
            abort();
            break;
        case 1:
            paint_Line();
            break;
        case 2:
            paint_Square();
            break;
        case 3:
            paint_Rectangle();
            break;
        case 4:
            paint_triangle();
            break;
        case 5:
            paint_circle();
            break;
        case 6:
            paint_plus();
            break;
        case 7:
            paint_Square_in_Square();
            break;
        case 8:
            paint_Chess_Board();
            break;
        case 9:
            paint_Grid();
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
