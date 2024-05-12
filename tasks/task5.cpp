//the name is task 5 because idk what is S called on english
#include <iostream>
#include <ostream>
using namespace std;
int main() {
    cout << "Введите размер стороны a и b прямоугольника" << endl;
    int var, var1;
    cin >> var;
    cin >> var1;
    cout << "Периметр прямоугольника " << (var + var1) * 2 << endl;
    cout <<  "Площадь прямоугольника " << (var * var1) << endl;
}