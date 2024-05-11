#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char myString[] = "String";
    cout << myString << " содержит " << sizeof(myString) << " букв" << endl;
    cout << myString << " содержит " << strlen(myString) << " букв" << endl;
    return 0;
}