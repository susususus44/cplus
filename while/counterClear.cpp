#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    int counter = 1;
    while (counter <= 10) {
        cout << counter << '\n';
        ++counter;
        sleep(1);
        system("clear");
    }
    return 0;
}