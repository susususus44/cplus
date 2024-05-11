#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char emo[] {"🚑🚿☔"};
    cout << emo << endl;
    char rus[] {"Русский"};
    cout << rus << " размер: " << sizeof(rus) << " байт " << " тип: " << typeid(rus).name() << endl;
    return 0;
}
