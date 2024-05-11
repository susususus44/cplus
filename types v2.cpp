/******************************************************************************
Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <iostream>
using namespace std;

// types.cpp

int main() {
    cout << "Типы данных\n";
    // short - маленький целочисленный тип
    // int - средний целочисленный тип
    // long - большой целочисленный тип
    // 0 1 2 35 66 100 / 2.345, 23.7 / a, b, c, d etc / string
    cout << "Целочисленные типы:\n";
    cout << "Тип short: \t" << sizeof(short) << " байта" << "-32'768 до 32'767\n";
    cout << "Тип int: \t" << sizeof(int) << " байта " << "-2'147'483'648 до 2'147'483'647\n";
    cout << "Тип long: \t" << sizeof(long) << " байта " << "-9'223'372'036'854'775'808 до 9'223'372'036'854'775'807\n";
    cout << "Тип long long: \t" << sizeof(long long) << " байта\n";
    cout << "\nВещесвенные числа\n";
    cout << "Тип float: \t" << sizeof(float) << " байта " << "-2'147'483'648 до 2'147'483'647\n";
    cout << "Тип double: \t" << sizeof(double) << " байта " << "-9'223'372'036'854'775'808 до 9'223'372'036'854'775'807\n";
    cout << "Тип long double: \t" << sizeof(long double) << " байта\n";
    cout << "\nСимвольный тип\n";
    cout << "Тип char: \t" << sizeof(char) << " байта " << "-128 до 127";
    cout << "\nСтрока\n";
    cout << "Строковый тип: \t" << sizeof(string) << " байта\n";
    return 0;
}