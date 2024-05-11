#include <iostream>
using namespace std;
int main() {
    int counter{0}; // counter =  0;
    do {
        if (counter == 5) {
            continue; // пропускаем 5
        }
        cout << counter << ' ';
    } while (++counter < 10);
    cout << endl;
    return 0;
}