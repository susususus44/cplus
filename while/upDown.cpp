#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    int min = 0;
    int max = 255;
    int upDown = 0;
    steps = 15;
    int counter = 0;
    int iter = 2 * (max / steps);
    while (counter <= iter) {
        ++counter;
        upDown += steps;
        if (upDown < min || upDown > max) {
            steps = -steps;
        }
        cout << upDown << endl;
    }
    return 0;
}