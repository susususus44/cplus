#include <iostream>
using namespace std;
int main() {
    int arr[5] {0};
    puts("Содержимое массива до");
    for (int element = 0; element <= 4; ++element) {
        cout << arr[element] << ' ';
    }
    int a = 0;
    puts("\nЗаполним циклом массив по порядку");
    for (int i = 0; i <= 4; ++i) {
        arr[i] = ++a;
        cout << arr[i] << ' ';
    }
    puts("\nРеверс значений массива 1-й способ");
    int b = 5;
    for (int i = 4; i >= 0; --i) {
        cout << arr[i] << ' ';
        arr[i] = --b
    }
    puts("\nРеверс значений массива 2-й способ");
    int array[] {1,2,3,4,5};
    const int SIZE = sizeof(array) / sizeof(*array);
    int k = 0, reverse[SIZE];
    for (int i = SIZE; i >= 0; --i) {
        reverse[k] = array[i];
        ++k;
    }
    for (auto i : reverse) {
        cout << i;
    }
    cout << endl;
    return 0;
}
