#include <iostream>
using namespace std;

int main()
{
    cout << "Инкремент переменной i:\n";
    int i = 5;
    ++i;
    i = i + 1;
    ++i;
    ++i;
    cout << i << endl;
    cout << "Декремент переменной i:\n";
    --i;
    --i;
    cout << i << endl;
    return 0;
}