#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char name[100];
    puts("Введите имя");
    cin.get(name, 100);
    cout << name << endl;
    return 0;
}
