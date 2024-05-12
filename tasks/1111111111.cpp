//task 9
#include <iostream>
using namespace std;
int main() {
    int LENGTH = 10;
    int arr[LENGTH];
    for (int i = 0; i < LENGTH; ++i) {
        arr[i] = 1;
    }
    for (int i = 0; i < LENGTH; ++i) {
        cout << arr[i];
    }
    cout << endl;
}