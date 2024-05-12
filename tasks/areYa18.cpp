//task 21
#include <iostream>
using namespace std;
int main() {
    cout << "Сколько вам лет?" << endl;
    int var = 0;
    cin >> var;
    if (var >= 18) {
        cout << "Вам можно";
    }
    else {
        cout << "Вам нельзя";
    }
    cout << endl;
}