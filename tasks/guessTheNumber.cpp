//task 25
#include <iostream>
using namespace std;
int main() {
    while (true) {
    srand(time(0));
    int var = (rand() % 3);
    cout << "Угадай число!" << endl;
    int var1;
    cin >> var1;
    if (var1 == var)
        cout << "Угадали!";
    else
        cout << "Не угадали!";
    cout << endl;
    }
}