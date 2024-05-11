#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    char userSelection = 'y';
    int userAnswer = 0;
    int check = 0;
    bool result = false;
    short secret1 = 0, secret2 = 0;
    puts("Проверка знаниий таблицы умножения");
    while(userSelection != 'n') {
        secret1 = 1 + (rand() % 10);
        secret2 = 1 + (rand() % 10);
        cout << secret1 << 'x' << secret2 << '?' << endl;
        check = secret1 * secret2;
        cin >> userAnswer;
        /*if (userAnswer == check) {
            puts("Правильно!");
        }
        else {
            puts("Не правильно!");
        }*/
        result = (userAnswer == check) ? true : false;
        cout << boolalpha << result << endl;
        puts("Желаете продолжить? [y/n]");
        cin >> userSelection;
    }
    return 0;
}