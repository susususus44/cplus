//task 24
#include <iostream>
using namespace std;
int main() {
    cout << "Сколько вам лет?" << endl;
    int var = 0;
    cin >> var;
    puts((var >= 18 ? "Вам можно" : "Вам нельзя"));
    cout << endl;
}