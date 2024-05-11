#include <iostream>
using namespace std;
int main() {
    int counter = 1;
    int result = 1;
    while (counter < 6) {
        int z = 0; // Создаётся и уничтожается при каждом цикле
        cout << "Введите натуральное число #" << counter << ':';
        ++counter; // Счетчик внутри цикла
        cin >> z;
        result *= z;
    }
    cout << "Произведение всех введённых чисел равна: " << result << endl;
    return 0;
}