#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    srand(time(0));
    int secret = 0;
    /*while (true) { 
        secret = 0 + (rand() % 5); // Это работает, если нач. <= 1. 10. 100
        cout << secret << endl;
        sleep(1);
        system("clear");
        if (secret < 0 || secret > 5) {
            cout << '\7';
            return 0;
        }
    }
    */
    int min = 3, max = 5;
    secret = rand() % (max - min + 1) + min;
    cout << secret << endl;
    //cout << rand() << endl; Числа без диапазона
    return 0;
}