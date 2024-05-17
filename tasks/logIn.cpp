//task 16
#include <iostream>
using namespace std;
int main() {
    cout << "Введите логин: ";
    string login = " ";
    cin >> login;
    cout << "Введите пароль: ";
    int password = 0;
    cin >> password;
    string right = (login == "rus" && password == 12345 ? "Правильно!" : "Неправильно");
    cout << right << endl;
    return 0;
}