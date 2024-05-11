#include <iostream>
using namespace std;

int main() {
    cout << boolalpha;
    bool waterCold; // Вода холодная
    const bool SWIM = true; // Я плаваю
    cout << "Вода холодная? (1 - да, 0 - нет)\n";
    cin >> waterCold;
    cout << "Я плавую? " << ((!waterCold && SWIM)) << endl;
    return 0;
}