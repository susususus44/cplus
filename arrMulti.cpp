#include <iostream>
using namespace std;
int main() {
    const int ARR_ROW_SIZE = 2, ARR_COL_SIZE = 3;
    int multiArr[ARR_ROW_SIZE][ARR_COL_SIZE] {{12, 30, 45}, {78, 96, 101}};
    puts("Доступ к элементам 2-мерного массива обычным способом");
    cout << multiArr[0][0] << ", ";
    cout << multiArr[0][1] << ",\t";
    cout << multiArr[0][2] << ", ";
    cout << multiArr[1][0] << ", ";
    cout << multiArr[1][1] << ", ";
    cout << multiArr[1][2] << '\n';
    puts("Доступ к массиву с помощью перебора (цикл for)");
    for (int row = 0; row < ARR_ROW_SIZE; ++row) {
        for (int col = 0; col < ARR_COL_SIZE; ++col) {
            cout << multiArr[row][col] << ' ';
        }
        cout << '\t';
    }
    cout << '\n';
    puts("Получение x/y координат");
    cout << "X: ";
    for (int x = 0; x < ARR_COL_SIZE; ++x) {
        cout << multiArr[0][x] << ' ';
    }
    cout << "\nY: ";
    for (int y = 0; y < ARR_COL_SIZE; ++y) {
        cout << multiArr[1][y] << ' ';
    }
    cout << '\n';
    return 0;
}