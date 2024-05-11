#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    int counter = 10;
    while (counter >= 1) {
        cout << counter << '\n';
        --counter;
        sleep(1);
        system("clear");
    }
    return 0;
}