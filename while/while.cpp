#include <iostream>
using namespace std;
int main()
{
    puts("Прямое перечисление");
    int x = 0;
    while (x < 10) {
        cout << x << endl;
        ++x;
    }
    x = 0;
    while (x != 10) {
        cout << x << endl;
        ++x;
    }
    puts("Обратное перечисление")
    x = 10;
    while (x > 0) {
        --x;
        cout << x << endl;
    }
    x = 10; 
    while (x != 0) {
        --x;
        cout << x << endl;
    }
    return 0;
}