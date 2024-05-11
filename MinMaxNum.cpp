#include <iostream>
using namespace std;

int main() {
    int x = 36, y = 444;
    cout << "Максимальное число: " << ((x > y) ? x : y) << endl;
    cout << "Минимальное число: " << ((x < y) ? x : y) << endl;
    
    return 0;
}