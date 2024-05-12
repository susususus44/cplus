#include <iostream>
using namespace std;
int main()
{
    puts("1. Конвертировать в int - введите символ.");
    puts("1. Конвертировать в char - введите код");
    puts("2. Выйти");
    int choose = 0, convertNum = 0;
    char convertChar;
    switch (choose)
    {
        case 1:
            puts("Введите символ");
            cin >> convertNum;
            cout << convertChar << " -> " << (int)(convertChar) << endl;
            break;
        case 2:
            puts("Введите символ");
            cin >> convertNum;
            if (convertNum < 0 || convertNum > 127) {
                puts("Неправильный код!");
                return main();
            }
            else {
                cout << convertNum " -> " << "\"" << (char)(convertNum) << "\"" << endl;
            }
        case 3:
            puts("Пока!");
            return 0;
            break;
        default:
            puts("Что?");
            return main();
            break;
    }
    return 0;
}