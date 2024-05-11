#include <iostream>
using namespace std;

int main() {
    const int X = 15;
    int input = 0;
    cout << "Введите любое натуральное число: ";
    cin >> ws >> input;
    cout << ((input < X) ? "< X" : "> X") << endl;
    
    
    return 0;
}