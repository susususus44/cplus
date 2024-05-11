#include <iostream>
using namespace std;
int main() {
    const int ROW = 2;
    const int COL = 5;
    int arr[ROW][COL] {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}};
    cout << arr[0][0] << ' ';
    cout << arr[0][1] << ' ';
    cout << arr[0][2] << ' ';
    cout << arr[0][3] << ' ';
    cout << arr[0][4] << ' ';
    puts("Циклом");
    for (int i = 0; i < COL; ++i) {
        cout << arr[0][i] << ' ';
    }
    cout << endl;
    for (int k = 0; k < COL; ++k) {
        cout << arr[1][k] << ' ';
    }
    cout << endl;
    puts("Вложенными цыклами");
    for (int i = 0; i < ROW; cout << endl, ++i) {
        for (int c = 0; c < COL; ++c) {
            cout << arr[i][c] << ' ';
        }
    }
    puts("Матрица");
    int matrix[3][5];
    for (int i = 0; i < 3; ++i) {
        for (int k = 0; k < 5; ++k) {
            matrix[i][k] = i + k;
        }
    }
    for (int i = 0; i < 3; cout << endl, ++i) {
        for (int k = 0; k < 5; ++k) {
            cout << matrix[i][k] << ' ';
        }
    }
    return 0;
}