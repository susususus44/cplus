#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int array[] {1, 23, 4, 5, -1321, 2, -123, -35, -2, 0};
    const int LENGTH = sizeof(array) / sizeof(*array);
    for (int i = 0; i != LENGTH; ++i) {
        if (array[i] < 0) {
            cout << array[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}
