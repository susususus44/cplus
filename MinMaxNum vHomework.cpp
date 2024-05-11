#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    cout << "Введите 2 натуральных числа через пробел: ";
    cin >> x >> y;
    cout << endl;
    cout << "Максимальное число: " << ((x > y) ? x : y) << endl;
    cout << "Минимальное число: " << ((x < y) ? x : y) << endl;
    
    return 0;
}