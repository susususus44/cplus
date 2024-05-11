#include <iostream>
using namespace std;
struct Something { int nX, nY, nZ; };
struct Some {
    const int a = -10;
    int b;
    char c;
    double d;
    unsigned short e;
    bool boo;
};
int main() {
    Something so;
    cout << "Размер поля в байтах" << sizeof(so.nX) << " тип поля: " << typeid(so.nX).name() << endl;
    Some some;
    some.b = 12;
    cout << some.b << endl;
    cout << "Размеры поля в байтах: " << sizeof(some.A) << typeid(some.A).name() << endl;
    return 0;
}