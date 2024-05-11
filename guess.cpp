#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    srand(time(0));
    int secret = 1 + (rand() % 5);
    cout << "Угадай число!\n";
    int answer = 0;
    cout << "Введите любое число: ";
    cin >> answer;
    if(answer >= 6)
    {
        answer = 5;
        cout << "(Изменено на 5)\n\n";
    }
    sleep(1);
    if (answer <= 0)
    {
        answer = 1;
        cout << "(Изменено на 1)\n\n";
    }
    sleep(1);
    cout << boolalpha << secret << ", "
        << ((secret == answer) ? true : false) << endl;
    return 0;
}