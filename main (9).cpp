#include <iostream>
using namespace std;
int main() {
    puts("Викторина вопросов");
    char again = 'y';
    short trueCount = 0;
    while (again == 'y') {
        puts("Можно ли выучить C++ за один часовой видеоролик? 0 - нет, 1 - да");
        bool userChoice = false;
        cin >> userChoice;
        if (userChoice != true) {
            cout << "Верно! C++ не возможно выучить за один ролик!\n\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n\n";
        }
        puts("g++ лучше clang? 0 - нет, 1 - да");
        cin >> userChoice;
        if (userChoice != true) {
            cout << "Верно! clang лучше g++!\n\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n\n";
        }
        puts("Обявление переменной == её инициализации? 0 - нет, 1 - да");
        cin >> userChoice;
        if (userChoice != true) {
            cout << "Верно! Обявление и инилзация - это разные операции!\n\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n\n";
        }
        cout << "Ваши баллы: " << trueCount << endl;
        cout << "Желаете повторить? y - да, any key - выйти";
        cin >> again;
    }
    return 0;
}