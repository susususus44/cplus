#include <iostream>
using namespace std;
int main()
{
    cout << "\e[41;31mПривет!\e[0m" << endl;
    cout << "\e[47;31mПривет!\e[0m" << endl;
    cout << "\e[47;30mПривет!\e[0m" << endl;
    cout << "\e[31m" << 25 << "\e[0m" << endl;
    int value = 100;
    cout << "\e[34m" << value << "\e[0m" << endl;
    cout << "\e[47;34m" << value << "\e[0m" << endl;
    cout << "\e[47;31m" << value << "\e[0m" << endl;
    const auto YELLOW = "\e[33m";
    const auto END_COLOR = "\e[0m";
    cout << YELLOW <<  value << END_COLOR << endl;
    return 0;
}
/*
          foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45 // Пурпурный
cyan         36         46 // Голубой
white        37         47
*/