#include <iostream>
using namespace std;
int main() {
    puts("Сколько вам лет?");
    int var = 0;
    cin >> var;
    cout << "Вам ещё " << 100 - var << " до 100 лет";
    cout << endl;
}