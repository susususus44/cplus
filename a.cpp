#include <iostream>
using namespace std;

int main()
{
    cout << "Среднее арифмитическое:\n";
    int average = 0, firstNum = 0, secondNum = 0, thirdNum = 0;
    cout << "(Программа сделает: (первое число + второе число + третье число) / 3.)\nВведите три натуральных числа(Пишите через пробел или через новую строчку): ";
    cin >> firstNum >> secondNum >> thirdNum;
    average = (firstNum + secondNum + thirdNum) / 3;
    cout << "Итого: " << average << endl << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    
    cout << "Нахождение общего сопротевления в последовательной цепи:\n";
    cout << "(Программа сделает: первое число + второе число.)\nВведите 2 значения(Пишите через пробел или через новую строчку): ";
    float total = 0, firstResistance = 0, secondResistance = 0;
    cin >> firstResistance >> secondResistance;
    total = firstResistance + secondResistance;
    cout << "Итого: " << total << endl << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    
    cout << "Нахождение общего сопротевления в парарельной цепи:\n";
    cout << "(Программа сделает: (первое число * второе число) / (первое число + второе число))\nВведите 2 значения(Пишите через пробел или через новую строчку): ";
    cin >> firstResistance >> secondResistance;
    total = (firstResistance * secondResistance) / (firstResistance + secondResistance);
    cout << "Итого: " << total << endl << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    
    cout << "Закон Ома:\n";
    double current = 0, volt = 0, resistance = 0;
    cout << "(Программа сделает: первое число / второе число.)\nВведите 2 значения(Пишите через пробел или через новую строчку): ";
    cin >>  volt >> resistance;
    current = volt / resistance;
    cout << "Итого: " << current << endl << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    
    cout << "Площадь прямоугольника:\n";
    double square = 0, aSide = 0, bSide; 
    cout << "(Программа сделает: первое число * второе число)\nВведите 2 значения(Пишите через пробел или через новую строчку): ";
    cin >> aSide >> bSide;
    square = aSide * bSide;
    cout << "Итого: " << square << endl << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    // Дз - найти периметр прямоугольника
    return 0;
}