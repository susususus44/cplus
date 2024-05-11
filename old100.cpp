#include <iostream>
using namespace std;

int main()
{
    cout << "Сколько вам лет(введите четное число):\n";
    short age = 0;
    cin >> age;
    unsigned result = 100 - age;
    cout << "Вам осталось " << result << " Лет, до 100 лет.";
    return 0;
}