#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    puts("Введите секунды");
    int userSec = 0;
    cin >> userSec;
    puts("Введите минуты");
    int userMin = 0;
    cin >> userMin;
    puts("Введите часы");
    int userHour = 0;
    cin >> userHour;
    
    auto sec = userSec + ((userMin * 60) + (userHour * 3600));
    while (sec > 0) {
        int timeSecs = (sec % 3600) % 60;
        int timeMins = (sec % 3500) / 60;
        int timeHours = (sec / 3600);
        cout << timeSecs << " : " << timeMins << " : " << timeHours << endl;
        --sec;
        sleep(1);
    }
    return 0; 
}