#include <iostream>
using namespace std;

int main() {
    cout << "Программа сравнения натуральных чисел\n";
    cout << "Введите 2 числа через пробел: ";
    int firstNum = 0, secondNum = 0;
    cin >> firstNum >> secondNum;
    string equal = "Числа равны", notEqual = "Числа не равны";
    (firstNum == secondNum) ? (cout << equal << '\n') : (cout << notEqual << '\n');
    
    return 0;
}