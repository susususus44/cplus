#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    static int counter = 0;
    if (counter >= 0) {
        sleep(1);
        ++counter;
        cout << counter << endl;
        main();
        if (counter >= 15) { return 0; }
    }
    return 0;
}