#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
        if (i == 7) { continue; }
        cout << i << ' ';
    }
    cout << endl;
    for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
        if (i == 7) { break; }
        cout << i << ' ';
    }
        for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
        if (i == 7) { exit(0); }
        cout << i << ' ';
    }
    return 0;
}