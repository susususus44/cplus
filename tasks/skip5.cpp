//task 11
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 51; i++) {
        if (i % 5 == 0)
            continue;
        cout << i;
    }
    cout << endl;
}