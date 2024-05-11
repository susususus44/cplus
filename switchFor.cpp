#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    puts("Меню");
    puts("1. Прямой счёт");
    puts("2. Обратный счёт");
    puts("3. Только чётные");
    puts("4. Только нечётные");
    int choice = 0;
    cin >> choice;
    switch (choice) {
        case 1:
            for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
                cout << i << ' ';
            }
            break;
        case 2:
            for (int i = 10; i >= 0; sleep(1), cout.flush(), --i) {
                cout << i << ' ';
            }
            break;
        case 3:
            for (int i = 0; i != 10; sleep(1), cout.flush(), i += 2) {
                cout << i << ' ';
            }
            break;
        case 4:
            for (int i = 1; i != 7; sleep(1), cout.flush(), i += 2) {
                cout << i << ' ';
            }
            break;
        default:
            puts("Что");
            break;
    }
    
    return 0;
}