//task 22
#include <iostream>
using namespace std;
int main() {
    while (true) {
    cout << "Сколько вам лет?" << endl;
    int var = 0;
    cin >> var;
    if (var >= 18) {
        cout << "Вам можно" << endl << endl;
    }
    else {
        cout << "Вам нельзя" << endl << endl;
    }
    }
    cout << endl;
}