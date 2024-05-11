#include <iostream>
using namespace std;
struct AxisesOne
{
    double x;
    double y;
    double z;
};
struct AxesTwo
{
    double x = 2.4;
    double y = 3.1;
    double z = 4.8;
};
int main() {
    puts("Иницилизируем поля структуры поиском");
    AxisesOne axOne = { 35.13, 1.39, 83.3 };
    cout << axOne.x << ' ' << axOne.y << ' ' << axOne.z << endl;
    puts("Иницилизируем с помощью переменных");
    double X = 50.1, Y = 2.45, Z = 0.1;
    AxisesOne xyz { X, Y, Z };
    cout << xyz.x << ' ' << xyz.y << ' ' << xyz.z << endl;
    puts("Иницилизируем пользовательским вводом");
    double numX, numY, numZ;
    puts("Введите 3 любый значения для x, y и z через пробел");
    cin >> numX >> numY >> numZ;
    AxisesOne zyx { numX, numY, numZ };
    cout << zyx.x << ' ' << zyx.y << ' ' << zyx.z << endl;
    puts("Повторное использование структуры\nЕщё раз введите три значения через пробел");
    cin >> numX >> numY >> numZ;
    AxisesOne axes { numX, numY, numZ };
    cout << axes.x << ' ' << axes.y << ' ' << axes.z << endl;
    AxesTwo moreaxes;
    cout << "Ось X: " << moreaxes.x << " Ось Y: " << moreaxes.y << " Ось Z: " << moreaxes.z << endl;
    return 0;
}