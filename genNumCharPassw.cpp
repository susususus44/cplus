#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    const int SIZE = 90;
    int arr[SIZE] {0};
    int passIndex = 32;
    for (int i = 0; i != SIZE; ++i) {
        arr[i] = ++passIndex;
    }
    /* for (auto i : arr) { cout << (char)i << ' '; }
    cout << endl; */
    puts("Введите размер пароля от 3 до 10");
    short sizePass = 0;
    cin >> ws >> sizePass;
    int secret = 0, lowLimit = 2, highLimit = 10;
    if ((sizePass > lowLimit) && (sizePass <= highLimit)) {
        for (int i = 0; i != sizePass; ++i) {
            secret = (rand() % 90);
            cout << arr[secret];
        }
    }
    else {
        puts("Размер пароля вне установленного диапазона!");
    }
    return 0;
}