//task 17
#include <iostream>
using namespace std;
int main() {
    string login = " ";
    int password = 0;
    int tries = 0;
    while (true) {
        cout << "Введите логин: ";
        getline(cin >> ws, login);
        cout << "Введите пароль: ";
        cin >> password;
        if (login == "rus" && password == 12345)
        {
            cout << "Правильно! ";
            if (tries > 0)
                cout << tries << " неправильные попытки";
            return 0;
        }
        else
        {
            cout << "Не правильно! Попробуйте ещё раз" << endl;
            tries++;
        }
    }
}