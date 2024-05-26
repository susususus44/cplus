//task 23
#include <iostream>
using namespace std;
int main() {
    cout << "Сколько вам лет?" << endl;
    int var = 0;
    cin >> var;
    int is18 = var >= 18;
    switch (is18)
    {
        default:
            puts("Вам нельзя");
            break;
        case 1:
            puts("Вам можно");
            break;
    }
    cout << endl;
}