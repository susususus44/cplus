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
unsigned short ush = 20; // Unsigned - только +
unsigned int uintt = 30;
unsigned long ulg = 202;
// Вещественные числа
float fl = 2.20; // Небольшая точность 
double db = 23.767; // Большая точность
//unsigned float ufl = 303.12;
//unsigned double udb = 3.11;
char ch = 65;
char sch = 's';
char bch = 97;
string str = "Word";

int main ()
{
    // short, int, long, float, double, char, string
    sh = 10; // Присвоил переменной sh значение 10
    cout << sh << ' ' << in << ' ' << lg << '\n'; // Вызов переменной sh
    sh = -3; //Signed - плюс и минус
    in = -1;
    lg = -10;
    cout << sh << ' ' << in << ' ' << lg << '\n';
    cout << ush << ' ' << uintt << ' ' << ulg << '\n';
    cout << fl << ' ' << db << '\n';
    cout << (int)ch << ' ' << sch <<'\n';
    cout << (char)(bch + 1) << '\n';
    cout << str << '\n';
    // Signed Short - -32,768 до 32,767
    return 0;
}