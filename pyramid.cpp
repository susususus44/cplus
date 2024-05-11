#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    const int height = 5;
    for (int i = 1; i <= height; ++i) {
        for (int y = i; y < height; ++y) {
            cout << ' ';
        }
        for (int x = 1; x < (i * 2); ++x) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}