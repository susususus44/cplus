#include <iostream>
using namespace std;

int main()
{
    const string LOGIN = "user";
    const short PASSWORD = 12345;
    cout << "Введите логин: ";
    string userLogin;
    getline(cin, userLogin);
    cout << "Введите пароль: ";
    short userPass = 0;
    cin >> ws >> userPass;
    cout << boolalpha << ((LOGIN == userLogin) && (PASSWORD == userPass) ? true : false) << endl;
    return 0;
}