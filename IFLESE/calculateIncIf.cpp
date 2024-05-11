#include <iostream>
using namespace std;
int main()
{
    puts("Простой калькулятор");
    double num1 = 0, num2 = 0, result = 0;
    char op;
    cout << "Введите число, оператор и число";
    cin >> num1 >> op >> num2;
    if (op == '+') {
        result = num1 + num2;
    }
    if (op == '-') {
        result = num1 - num2;
    }
    return 0;
}