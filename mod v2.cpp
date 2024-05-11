#include <iostream>
using namespace std;
/*
С++ предоставляет оператор модулю "%"
который возвращает остаток цулочисленного деления.
Выражение "x % y" дает остаток после деления x на y.
Таким образом 7 % 4 дает 3, 17 % 5 дает 2.
Формула деления с остатком:
a = b * c + d
где a - делимое, b - делитель, c - неполное частное, d - остаток
Например:
15 : 2  = 7 (остаток 1)
*/
int main()
{
    int a = 15 % 2; // 7 * 2 = 14 + 1
    cout << a << endl;
    a = 19 % 2; // 9 * 2 + 19
    cout << a << endl;
    a = 19 % 3;
    cout << a << endl;
    a = 19 % 4;
    cout << a << endl;
    a = 19 % 5;
    cout << a << endl;
    cout << "Показать последнюю цифру в числе:\n";
    int num = 12345661;
    cout << num % 10 << endl;
    int x = 0, y = 6;
    cout << boolalpha << ((x == y) ? true : false) << endl;
    cout << "Введите любое натуральное число: ";
    cin >> x;
    cout << boolalpha << ((x % 2 == 0) ? true : false) << endl;
    return 0;
}