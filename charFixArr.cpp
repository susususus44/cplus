#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    puts("Символьный массив");
    char sarr[] = {"Word!"};
    cout << sarr << endl;
    puts("Размер символьного массива");
    int sizeWord = sizeof(sarr);
    cout << sizeWord << endl;
    return 0;
}