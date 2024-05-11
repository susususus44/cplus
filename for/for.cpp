#include <iostream>
using namespace std;
int main() {
    // (начало; цель; шаг)
    puts("Счет перед до 9");
    
    for (int i = 0; i < 10; ++i) {
        cout << i << ' ';
    }
    cout << endl;
    for (int i = 0; i != 10; ++i) {
        cout << i << ' ';
    }
    cout << endl << "Другая форма for\n";
    int i = 0;
    for ( ; i < 10; ) {
        cout << i << ' ';
        ++i;
    }
    cout << endl << "Счет вперед до 10\n";
    for (int i = 1; i <= 10; ++i) {
        cout << i << ' ';
    }
    cout << endl << "Обратный Счет\n";
    for (int i = 0; i >= 50; i += 5) {
        cout << i << ' ';
    }
    cout << endl << "С шагом 5\n";
    for (int i = 0; i <= 50; i += 5) {
        cout << i << ' ';
    }
    cout << endl << "Обратный счет с шагом 5\n";
    for (int i = 50; i >= 0; i -= 5) {
        cout << i << ' ';
    }
    cout << endl << "3 стодбика по 5 рядов\n";
    const int ROW = 5, COL = 3;
    for (int i = 0; i < ROW; ++i) {
        for (int k = 0; k < COL; ++k) {
            cout << i << ',' << k << ' ';
        }
    }
    int num = 0;
    for (num = 0; num <= 5; ++num) {
        cout << "num: " << num << endl;
        if (num == 3) { break; }
    }
    cout << "Цикл прервался на: " << num << '\n';
    return 0;
}