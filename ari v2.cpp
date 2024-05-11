#include <iostream>
#include <unistd.h>
using namespace std;

//ari.cpp

int main()
{
    // Массив типа char (символьный массив)
    // Массив - коллекция (множество) однотипных елементов 
    char strAlex[] = {"Alex"};
    char strProg[] = {"Programmer"};
    cout << strAlex << '\t' << strProg << endl;
    int sizeArr = (sizeof(strAlex) / sizeof(strAlex[0]) -1);
    cout << "Размер массива: " << sizeArr << endl;
    string alexStr = "Алекс";
    string alexProg = "Програмист";
    string total = alexStr + alexProg;
    cout << total << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=\n";
    int a = 5, b = 6;
    int result = a + (b - 3);
    cout << "Результат вычисления a + (b - 3): " << result << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=\n";
    a = 7, b = 9; // Переиницилизация переменных
    result = a * b;
    cout << "Результат вычисления a * b: " << result << endl;
    a = 12, b = 2;
    int division = a / b;
    cout << "Результат вычисления a / b: " << division << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "Правило ассациации:\n";
    double val = 6 + 5 - (1 * (5 / 2));
    cout << "Значение val: " << val << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=\n";
    int a1 = 5, a2 = 6;
    cout << "Сложение с присваиванием: " << (a1 += a2) << endl;
    // a1 = a1 + a2
    cout << "Вычитание с присваиванием: " << (a1 -= a2) << endl;
    // a1 = a1 - a2
    cout << "Умножение с присваиванием: " << (a1 *= a2) << endl;
    // a1 = a1 * a2
    cout << "Деление с присваиванием:" << (a1 /= a2) << endl;
    // a1 = a1 / a2
    sleep(2);
    cout << "Сигнал" << '\7' << '\n';
    return 0;
}

