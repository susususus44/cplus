#include <iostream>
using namespace std;
#include <unistd.h>
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
int main()
{
    puts("\e[46mПеречислление цветов ANSI\e[0m");
    for (int i = 41; i <= 47; sleep(1), cout.flush(), ++i) {
        cout << "\e[" << i << "m    \e[0m" << ' ';
    }
    cout << endl;
    return 0;
}