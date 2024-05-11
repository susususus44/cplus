#include <iostream>
using namespace std;
int main()
{
    puts("Простой арифметический калькулятор");
    double firstNum = 0, secondNum = 0, thirdNum = 0;
    char op;
    int result = 0;
    puts("Введите 1-е число, оператор и 2-е число через пробел");
    cin >> ws >> firstNum >> op >> ws >> secondNum;
    if (op == '+') {
        result = firstNum + secondNum; 
    }
    else if (op == '-') {
        result = firstNum - secondNum;
    }
    else if (op == ':' || op == '/') {
        result = firstNum / secondNum;
    }
    else if (op == '*') {
        result = firstNum * secondNum;
    }
    cout << endl << result << endl;
    return 0;
}