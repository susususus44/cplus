#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    srand(time(0));
    const double FRACTION = 1.0 / double((double)(RAND_MAX) + 1.0);
    int secret = 0, min = 100, max = 150;
    secret = (int)(rand() * FRACTION * (max - min + 1) + min);
    cout << secret << endl;
    return 0;
}