#include <iostream>
using namespace std;

int main()
{
    cout << "Разрешено ли ехать иди поедет ли автомобиль" << endl;
    bool motor, trans, lamp;
    cout << "Исправен ли мотор? ";
    cin >> motor;
    cout << "Исправна ли трасиссия? ";
    cin >> trans;
    cout << "Исправна ли лампа габарита? ";
    cin >> lamp;
    cout << boolalpha << "Разрешено ли ехать иди поедет ли автомобиль?: " << ((motor && trans) && (motor || lamp) && (!trans || lamp)) << endl;
    return 0;
}