//task 3
#include <iostream>
using namespace std;
int main() {
    cout << "Введите любое натуральное число кроме 5" << endl;
    int var = 0;
    while (var != 5) {
        cin >> var;
    }
    if (var == 5) {
        return 0;
    }
}