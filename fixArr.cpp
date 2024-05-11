#include <iostream>
using namespace std;
int main() {
    short arr[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    puts("Содержимое массива arr:");
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << endl;
    int arrSize = sizeof(arr);
    cout << "Размер массива в байтах: " << arrSize << endl;
    int arrCount = sizeof(arr) / sizeof(arr[0]);
    cout << "Количество элементов в массиве arr: " << arrCount << endl;
    int array[5] = {0};
    puts("Содержимое массива array:");
    for (int i = 0; i != 5; ++i) {
        cout << array[i] << ' ';
    }
    cout <<  endl;
    puts("Получить содержимое массива другим способом: ");
    for (auto i : array) { cout << i << ' '; }
    cout << endl;
    return 0;
}
