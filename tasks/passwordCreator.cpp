//task 19
#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    cout << "Введите количество знаков нового пароля от 3 до 10: ";
    int var = 0;
    cin >> var;
    if (var < 3 || var > 10) {
        cout << "Вы вышли за рамки диапазона!" << endl;
    }
    else {
        for (int i = 0; i <= var - 1; ++i) {
            cout << rand() % 9;
        }
        cout << endl;
    }
}
