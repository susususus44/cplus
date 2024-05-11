#include <iostream>
using namespace std;
int main()
{
    puts("Введите 2 любых натуральных числа");
    int a = 0, b = 0;
    cin >> ws >> a >> ws >> b;
    if (a >= 0 && b >= 0) {
        puts("Оба числа положительные");
    }
    else if (a <= 0 || b >= 0) {
        puts("Только одно число положительное");
    }
    else if (a < 0 && b < 0) {
        puts("Нет положительных чисел");
    }
    else {
        puts("Незнаю!");
    }
    return 0;
}