#include <iostream>
using namespace std;
int main() {
    puts("Используем константы для указания размера массива и доступа к его элементу");
    enum { INDEX, SIZE = 5 };
    int arr[SIZE];
    for (int i = 0; i != SIZE; ++i) {
        arr[i] = i;
    }
    for (auto i : arr) { cout << i << ' '; }
    cout << endl;
    int arrs[SIZE] = {15, 18, 2, 9, 100};
    cout << arrs[0] << endl;
    cout << arrs[INDEX] << endl;
    cout << *arrs << endl;
    puts("Заполнение нового массива вручную");
    int LENGTH = 3;
    int abc[LENGTH] {0};
    int a, b, c;
    puts("Введите по очереди через пробел 3 натуральных числа");
    cin >> a >> b >> c;
    abc[0] = {a},abc[1] = {b}, abc[2] = c;
    puts("Содердимое нового массива")
    for (auto i : abc) { cout << i << ' '; }
    cout << endl;
    return 0;
}
