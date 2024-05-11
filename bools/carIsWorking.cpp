#include <iostream>
using namespace std;

int main()
{
    cout << "Может ли ехать автомобиль?" << endl;
    bool motor, transmission, lamp, drive;
    cout << "Исправен ли мотор? ";
    cin >> motor;
    cout << "Исправна ли трасиссия? ";
    cin >> transmission;
    cout << "Исправна ли лампа габарита? ";
    cin >> lamp;
    drive = (lamp || motor) && (transmission && motor);
    cout << boolalpha << "Машина может ехать " << drive << endl;
    return 0;
}