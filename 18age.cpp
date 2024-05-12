#include <iostream>
using namespace std;

int main() {
    cout << "Сколько вам лет?\n";   
    int age = 0;
    cin >> ws >> age;
    cout << (age < 18 ? "Вам нельзя!" : "Можно!") << endl;
    return 0;
}