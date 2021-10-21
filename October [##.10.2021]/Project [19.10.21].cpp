#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));

    cout << "\a\n\n***Welcome to the program - \"Arrays\"***\t\t\t\n";
    cout << "---------------------------------------\n";

    const int size = 10;

    int array_int[size];
    short array_short[size];
    long array_long[size] = { 10,1,9,2,8,3,7,4,6,5 };
    char array_char[size] = { 'a', 'b', 'c', 'd', 'e', 'f', 'j', 'h', 'i', 'j' };
    bool array_bool[size] = { 1,0,0,1,0,1,1,0,1,1 };
    double array_double[size];
    float array_float[size] = { -7341243.1210251, -1.9649, -5.9387, 4.1760, 7.7821, 3.9046, 9.0914, 9.3870, 0.7865, -0.7710 };
    string array_str[size] = { "colors", "ionize", "bonsai", "tiller", "tackle", "cracky", "error", "404", "spilth", "mouse", };

    cout << "\nInteger" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        array_int[i] = rand() % 200 + (-100);
        cout << "array[" << i << "] " << "\t|\t" << array_int[i] << endl;
    }

    cout << "\nShort" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        array_short[i] = rand() % 200 + (-100);
        cout << "array[" << i << "] " << "\t|\t" << array_short[i] << endl;
    }

    cout << "\nLong" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] " << "\t|\t" << array_long[i] << endl;
    }

    cout << "\nChar" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] " << "\t|\t" << array_char[i] << endl;
    }

    cout << "\nBoolean" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] " << "\t|\t" << array_bool[i] << endl;
    }

    cout << "\nDouble" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        array_double[i] = (double)rand() / RAND_MAX * (25.0 - 0.01) + 0.01;;
        cout << "array[" << i << "] " << "\t|\t" << array_double[i] << endl;
    }

    cout << "\nFloat" << endl;
    cout << "----------\t\t---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] " << "\t|\t" << array_float[i] << endl;
    }
    cout << endl;

    cout << "\String" << endl;
    cout << "----------\t\t---\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] " << "\t|\t" << array_str[i] << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
