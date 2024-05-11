#include <iostream>
using namespace std;

int main()
{
    cout << "Введите ваш возвраст: ";
    int age = 0;
    cin >> age; // age\n
    //cin.ignore(32737, '\n'); //short
    cout << "\nВведите имя: ";
    string str;
    getline(cin >> ws, str);
    cout << age << '\t' << str << endl;;
    return 0;
}