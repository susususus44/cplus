#include<iostream>
using namespace std;
// Переменные - это наименованные объекты в программе
/*
1. Должна иметь имя
2. Должна иметь тип
3. Должна быть использована
4. Может быть глобальной или локальной
5. Может быть константной
*/
// Объявили переменную (тип имя)
short sh; // Глобальная переменна
int in = 303; // Объявление + Присваивание = Инициализация
long lg = 1001;

int main ()
{
    // short, int, long, float, double, char, string
    sh = 10; // Присвоил переменной sh значение 10
    cout << sh << ' ' << in << ' ' << lg << '\n'; // Вызов переменной sh
    
    return 0;
}
