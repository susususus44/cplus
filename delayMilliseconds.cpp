#include <iostream>
#include <thread>
using namespace std;
int main() {
    int counter = 0;
    while (counter != 10) {
        cout << ++counter << '\n';
        this_thread::sleep_for(chrono::milliseconds(250));
    }
    return 0;
}