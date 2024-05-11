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
    int arra[3] = {5}; 
    puts("содержимое нового массива arra: ");
    for (int index = 0; index != 3; ++index) {
        arra[index] = 5;
    }
    for (auto i : arra) { cout << i; }
    cout << endl;
    const short ARR_INDEX[] {5, 4, 3, -2, 1};
    for (auto i : ARR_INDEX) { cout << i << ' '; }
    cout << endl;
    //cout << showpos << 25;
    puts("Заполнения массива с помощью цикла");
    long newArr[5];
    for (int a = 0; a != 4; a++) {
        newArr[a] = a + 1;
    }
    for (auto i : newArr) { cout << i << ' '; }
    cout << endl;
    return 0;
}
