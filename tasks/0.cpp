//task 8
#include <iostream>
using namespace std;
int main() {
    int arr[] {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100};
    for (int i = 0; i < 12; ++i) {
        cout << (char)arr[i];
    }
    cout << endl;
}