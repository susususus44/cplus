#include <iostream>
using namespace std;
int main() {
    puts("Найти наиболшее из 3-х чисел");
    puts("Найти наиболшее из 3-х чисел");
    int a = 0, b = 0, c = 0;
    cin >> ws >> a >> ws >> b >> ws >> c;
    if (a > b) {
        if (a > c) {
            max = a;
        }
        else {
            max = c;
        }
    }
    else {
        if (b > c) {
            max = b;
        }
        else {
            max = c;
        }
    }
}