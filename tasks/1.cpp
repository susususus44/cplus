//task 15
#include <iostream>
using namespace std;
int main() {
    int digits = 0;
    int num = 55211;
    cout << "В числе " << num;
    while (num /= 10) ++digits;
    cout << " есть " << digits + 1 << " чифры" << endl;
}