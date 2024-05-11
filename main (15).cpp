#include <iostream>
using namespace std;

int main() {
    const int ROW = 4, COL = 4;
    int a[ROW][COL];
    cout << "1-й вариант" << endl;
    for (int i = 0; i < ROW; cout << endl, ++i) {
        for (int k = 0; k < COL; ++k) {
            a[i][k] = 0;
            cout << a[i][k] << ' ';
        }
    }
    return 0;
}