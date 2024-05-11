#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    srand(time(0));
    const int SIZE = 10;
    int find = 0, counter = 0;
    int arr[SIZE] {0};
    for (int i = 0; i != SIZE; ++i) {
        arr[i] = (rand() % 10);
    }
    for (auto i : arr) {
        cout.flush() << i << ' ';
        sleep(1);
    }
    cout << endl;
    for (int i = 0; i != SIZE; ++i, sleep(1)) {
        cout << "index: " << i << ' ';
        if (arr[i] == find) {
            puts("Found!");
            ++counter;
        }
        else { puts("Not found"); }
    }
    cout << "Found: " << find << ' ' << counter << " times" << endl;
    return 0;
}