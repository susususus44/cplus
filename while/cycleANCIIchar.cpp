#include <iostream>
using namespace std;
int main() {
    char myChar = 'a';
    int nums = 1; // Порядковая нумерация
    while (myChar <= 'z') {
        cout << '#' << nums << ": " << myChar << '-' << (int)(myChar) << ' ';
        ++myChar;
        if (nums % 3 == 0) { cout << endl; }
        ++nums;
    }
    return 0;
}