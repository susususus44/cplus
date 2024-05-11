#include <iostream>
using namespace std;
int main() {
    int outer = 0;
    while (outer <= 5) {
        int inner = 0;
        while (inner <= outer) {
            cout << ++inner << ' ';
        }
        cout << '\n';
        ++outer;
    }
    return 0;
}