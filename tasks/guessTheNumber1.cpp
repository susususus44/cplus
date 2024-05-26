//task 27
#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int var = (rand() % 3);
    cout << "Угадай число!" << endl;
    int var1;
    cin >> var1;
    puts(var1 == var ? "Угадали!" : "Не угадали!");
    cout << endl;
}