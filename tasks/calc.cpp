//task 14
#include <iostream>
using namespace std;
int main() {
    cout << "Простой арифметический калькулятор" << endl << "Введите первое число: ";
    int num = 0;
    cin >> num;
    cout << "Введите символ операции" << endl;
    char faw = ' ';
    cin >> faw;
    cout << "Введите второе число: ";
    int num1 = 0;
    cin >> num1;
    cout << "Результат вычисления: ";
    switch (faw) {
        case '+':
            cout << num + num1;
            break;
        case '-':
            cout << num - num1;
            break;
        case '*':
            cout << num * num1;
            break;
        case '/':
            cout << num / num1;
            break;
        default:
            cout << "nuh uh";
            break;
    }
    cout << endl;
}