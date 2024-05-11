#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    srand(time(0));
    const double FRACTION = 1.0 / double((double)(RAND_MAX) + 1.0);
    int secret = 0, min = 100, max = 150;
    while (true) { 
        secret = (int)(rand() * FRACTION * (max - min + 1) + min);
        cout << secret << endl;
        sleep(1);
        system("clear");
        if (secret < 100 || secret > 150) {
            cout << '\7';
            return 0;
        }
    }
    
    return 0;
}