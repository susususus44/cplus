#include <iostream>
using namespace std;

int main() {
    const int N = 3;
    int a[N][N];
    for (int i = 0; i < N; ++i) {
        for (int k = 0; k < 0; ++k) {
            cout << "Введите элемент матрицы a[" << i << "][" << k << "]";
            cin >> a[i][k];
        }
    }
    for (int i = 0; i < N; cout << endl, ++i) {
        for (int k = 0; k < N; ++k) {
            cout << a[i][k];
        }
    }
    return 0;
}