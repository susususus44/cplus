#include <iostream>
using namespace std;
int main() {
    int max = 8;
    const int MIN = 0, STEP = 1;
    while (max > MIN) {
        cout << max << ' ';
        max -= STEP;
    }
    cout << endl;
    return 0;
}