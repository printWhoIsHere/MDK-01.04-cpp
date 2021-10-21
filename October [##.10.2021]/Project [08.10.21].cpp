#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "\a\t\t***Приветствуем Вас в программе — \"Геометрические фигуры\"***\t\t\t\n";

    int figure, shape_size;
    cout << "\n\aВыберите геометрическую фигуру:" << endl;
    cout << "[1] Линия\n";
    cout << "[0] Выход\n\n";
    cout << "Геометрическая фигура №: ";
    cin >> figure;

    switch (figure)
    {
    case 1:
    {
        int line_type, texture;
        cout << "\n\aВыберите тип линии:" << endl;
        cout << "[1] Горизонтальная\n";
        cout << "[2] Вертикальная\n\n";
        cin >> line_type;

        switch (line_type)
        {
        case 1: //Горизонтальная линия
        {
            cout << "\n\aВыберите текстуру линии:" << endl;
            cout << "[1] #\n";
            cout << "[2] *\n\n";
            cin >> texture;

            switch (texture)
            {
            case 1:
            {
                cout << "\nВведите размер линии: ";
                cin >> shape_size;

                system("cls");
                cout << endl << endl << "\t";

                while (shape_size > 0)
                {

                    cout << "#";
                    shape_size -= 1;
                }
                cout << endl;
                break;
            }
            case 2:
            {
                cout << "\nВведите размер линии: ";
                cin >> shape_size;

                system("cls");
                cout << endl << endl << "\t";

                while (shape_size > 0)
                {

                    cout << "*";
                    shape_size -= 1;
                }
                cout << endl;
                break;
            }
            default: { cout << endl << "В данном списке такой текстуры не имеется"; break; }
            }
        break;
        }
        case 2: //Вертикальная линия
        {
            cout << "\n\aВыберите текстуру линии:" << endl;
            cout << "[1] #\n";
            cout << "[2] *\n\n";
            cin >> texture;

            switch (texture)
            {
            case 1:
            {
                cout << "\nВведите размер линии: ";
                cin >> shape_size;

                system("cls");
                cout << endl << endl << "\t";

                while (shape_size > 0)
                {

                    cout << "#";
                    shape_size -= 1;
                    cout << endl << "\t";
                }
                break;
            }
            case 2:
            {
                cout << "\nВведите размер линии: ";
                cin >> shape_size;

                system("cls");
                cout << endl << endl << "\t";

                while (shape_size > 0)
                {

                    cout << "*";
                    shape_size -= 1;
                    cout << endl << "\t";
                }
                break;
            }
            default: { cout << endl << "В данном списке такой текстуры не имеется"; break; }
            }
        break;
        }
    break;
    }
    case 0:
    {
        break;
    }
    default: { cout << endl << "в данном списке такой фигуры не имеется"; }
    }
    }
    cout << endl << endl << "выход из программы! " << endl;
    system("pause");
    return 0;
}
