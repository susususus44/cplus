#include <iostream>
using namespace std;

int main() {
    int i, k, row, col, arr[5][5];
    cout << "Введите значения для рядов = ";
    cin >> row;
    cout << "Введите значения для столбцов = ";
    cin >> col;
    cout << "Ввод значения элементов матрицы\n";
    for (i = 0; i < row; ++i) {
        cout << "Заполнение ряда: " << i << '\n';
        for (k = 0; k < col; ++k) {
            cin >> arr[i][k]; // Заполнение элементов матрицы
        }
    }
    for (i = 0; i < row; cout << '\n', ++i) {
        for (k = 0; k < col; ++k) {
            cout << arr[i][k] << ' ';
        }
    }
    return 0;
}