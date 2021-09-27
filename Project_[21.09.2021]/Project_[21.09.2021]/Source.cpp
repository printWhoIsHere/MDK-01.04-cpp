#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "[1]Лето\n";
    cout << "[2]Осень\n";
    cout << "[3]Зима\n";
    cout << "[4]Весна\n";

    int season;
    cout << "Выберите время года: \n";
    cin >> season;

    if (season == 1) {
        cout << "Сейчас лето, самое время искупаться в эту жару!";
    }
    else if (season == 2) {
        cout << "Сейчас осень, \"золотое\" время года!";
    }
    else if (season == 3) {
        cout << "Сейчас зима, лучше оденьтесь потеплее!";
    }
    else if (season == 4) {
        cout << "Сейчас весна, птички поют, ручейки журчат!";
    }
    else {
        cout << "Увы, ошибка ...";
    }

    return 0;
}