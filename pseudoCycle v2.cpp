#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    static int counter = 15;
    if (counter <= 15 && counter != 0) {
        sleep(1);
        --counter;
        cout << counter << endl;
        main();
        
    }
    if(counter == 0) {return 0;}
    return 0;
}