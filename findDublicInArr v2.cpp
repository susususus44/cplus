#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int arr[] {4, 7, 8, 8, 6, 5, 6, 4, 6, 8};
    for (int f = 0; f <= 9; f++) {
        arr[f] = (rand() % 9);
        cout << arr[f];
    }
    cout << endl;
    const int LENGHT = sizeof(arr) / sizeof(*arr);
    int find = 0;
    for (int i = 0; i < LENGHT; ++i) {
        for (int k = i + 1; k != LENGHT; ++k) {
            if (arr[i] == arr[k]) {
                for (int n = k - 1; n >= 0; --n) {
                    if (arr[k] == arr[n])
                        ++find;
                }
                if (find == 1) {
                    cout << arr[i] << ' ';
                }
                find = 0;
            }
        }
    }
    cout << '\n';
    return 0;
}