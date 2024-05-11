#include <iostream>
using namespace std;

// Имена переменных не должны начинаться с цифры
// Глобальные переменные - это зло!
//long var = 100;

int main(){
    cout << "Область видимости локальных переменных" << endl;
    {
        // Вреня жизни локальной переменной ограничено фигурными скобками
        long var = 100; // Это хороший вариант. Тут переменная появляется
        cout << var << endl; 
        // Тут она уничтожается
    }
    /*
    int var = 3;
    short var = 200; // Одинаковые имена разных переменных! Нельзя так делать!
    cout << var << endl;
    */
    int someVar = 3 + 7;
    cout << someVar << '\t' << " - это значение переменной" << endl;
    int variable = someVar + 3;
    cout << variable << endl;
    int num1 = 2, num2 = 1; // Инициализируем сразу 2 переменные
    cout << num1 << '\t' << num2 << '\v' << endl; // endl - Почти тоже, что и '\n'
    cout << "Поменяем местами значения двух переменных" <<  endl;
    num1 = num1 + num2; // 3
    num2 = num1 - num2; // 2
    num1 = num1 - num2; // 1
    cout << num1 << '\t' << num2 << endl;

    return 0;
}
