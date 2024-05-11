#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << setprecision(3);
    puts("Массив вещественных чисел");
    const int SIZE = 4;
    float farr[SIZE] {0};
    float ff = 0;
    for (int f = 0; f != SIZE; ++f) {
        cout << (farr[f] = {ff += 0.1}) << ' ';
    }
    cout << endl;
    double darr[SIZE];
    double dd = 0;
    for (int d = 0; d != SIZE; ++d) {
        cout << showpoint << (darr[d] = {dd -= 1}) << ' ';
    }
    cout << endl;
    return 0;
}