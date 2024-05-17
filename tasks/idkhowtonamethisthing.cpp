//task 13
#include <iostream>
using namespace std;
int main() {
    cout << "Введите любое натуральное число" << endl;
    int num = 0;
    cin >> num;
    string str = "Это чётное число";
    if (num % 2 == 1)
        str = "Это не чётное число";
    cout << str << endl;
}