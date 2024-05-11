#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha;
    const bool A = true;
    bool b;
    bool c;
    bool d;
    cout << "Указываем 1 (да), 0 (нет) для ввода данных" << endl;
    cout << "Работает ли кондиционер? ";
    cin >> b;
    cout << "Работает ли кулер прочессора? ";
    cin >> c;
    d = A && (b || c);
    cout << "Исправность сервера: " << d << endl;
    
    return 0;
}