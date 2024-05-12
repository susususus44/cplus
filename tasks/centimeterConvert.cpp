//task 2
#include <iostream>
using namespace std;
int main() {
    cout << "Введите длину в сантиметрах" << endl;
    int var = 0;
    cin >> var;
    cout << "Результат в дюймах: " << var / 2.54;
    cout << endl << endl;
    cout << "Введите длину в дюймах" << endl;
    cin >> var;
    cout << "Результат в сантиметрах: " << var * 2.54;
    cout << endl;
    return 0;
}