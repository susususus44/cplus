#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    int sec = 0, min = 0, hour = 0;
    while (true) {
        sleep(1);
        cout << sec << " : " << min << " : " << hour << endl;
        ++sec;
        while (sec >= 60) {
            sec = 0;
            cout << sec << " : " << min << " : " << hour << endl;
            while (min > 60) {
                sec = 0, min = 0;
                cout << sec << " : " << min << " : " << hour << endl;
            }
        }
    }
    return 0;
}