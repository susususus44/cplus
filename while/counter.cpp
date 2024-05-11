#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    const int MAX_NUM = 5;
    int sec = 0;
    while (sec != MAX_NUM) {
        cout << ++sec << endl;
        cout.flush();
        sleep(1);
    }
    return 0;
}