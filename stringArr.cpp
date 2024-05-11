#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string arr[] = {"i", "am", "programmer"};
    int LENGTH = sizeof(arr) / sizeof(*arr);
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << "\nРазмер массива arr = " << LENGTH << endl;
    cout << "Размер массива arr = " << *(&arr + 1) - arr << endl;
    cout << "Сортировка элементов массива по возрастанию\nПервый способ" << endl;
    sort(arr, arr + LENGTH);
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    puts("Второй способ");
    sort(begin(arr), end(arr));
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    puts("Сортировка элементов массива по убыванию первый способ");
    sort(arr, arr + LENGTH, greater<>());
    for (auto i : arr) {
        cout << i << endl;
    }
    cout << endl;
    puts("Второй способ");
    sort(begin(arr), end(arr), greater<>());
    for (auto i : arr) {
        cout << i << endl;
    }
    cout << endl;
    return 0;
}