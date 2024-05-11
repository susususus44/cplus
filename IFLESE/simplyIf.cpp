#include <iostream>
using namespace std;
int main()
{
    int M = 0, a = 6, b = a;
    M = a;
    if (b > a) {
        M = b;
    }
    cout << "\e[47;35m" << M << "\e[0m" << endl;
    cout << "\e[34mУгадай правильную букву\n\e[0m";
    char sim;
    cin >> ws >> sim;
    if (sim == 'a')
    {
        cout << "\e[32mПравильно!\n\e[0m";
        exit(0);
    }
    cout << "\e[31mУвы, вы не угадали.\e[0m";
    return 0;
}
