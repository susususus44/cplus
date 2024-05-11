#include <iostream>
using namespace std;

int main()
{
    cout << "Доставка заказа курьером" << endl;
    bool delivered, trafficJams, car, crash;
    cout << "Есть ли пробка на дороге? ";
    cin >> trafficJams;
    cout << "Сломался ли автомобиль курьера? ";
    cin >> car;
    cout << "Попал ли курьер в ДТП? ";
    cin >> crash;
    delivered = !trafficJams && !(car || crash);
    cout << boolalpha << "Разрешено ли ехать иди поедет ли автомобиль?: " << delivered << endl;
    return 0;
}