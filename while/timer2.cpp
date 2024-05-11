#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    auto sec = 0;
    while (sec >= 0) {
        ++sec;
        int timeSecs = (sec % 3600) % 60, timeMins = (sec % 3600) / 60, timeHours = (sec / 3600);
        cout << timeSecs << " : " << timeMins << " : " << timeHours << endl;
        sleep(1);
    }
    return 0;
}