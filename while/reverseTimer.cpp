#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    int min = 0;
    puts("Введите минуты");
    cin >> min;
    int sec = 60;
    while (min > 0) {
        int counter = min;
        --min;
        while (sec >= 1) {
            cout << --sec << " : " << min << endl;
            --counter;
            sleep(1);
        }
        sec = 60;
    }
    return 0; 
}