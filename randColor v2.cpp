#include <iostream>
#include <unistd.h>
using namespace std;

const auto RED  = "\e[41m   \e[0m";
const auto GREEN  = "\e[42m   \e[0m";
const auto YELLOW  = "\e[43m   \e[0m";
const auto BLUE  = "\e[44m   \e[0m";
const auto MAGENTA = "\e[45m   \e[0m";
const auto CYAN = "\e[46m   \e[0m";
const auto WHITE = "\e[47m   \e[0m";

int main() {
    srand(time(0));
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    int min = 0, max = 3;
    int secret = ((int)(rand() * FRACTION * (max - min + 1) + min));
    cout << secret << endl;
    if (secret == 0) {
        puts(RED);
    }
    else if (secret == 1) {
        puts(GREEN);
    }
    else if (secret == 2) {
        puts(YELLOW);
    }
    else if (secret == 3) {
        puts(BLUE);
    }
    else if (secret == 4) {
        puts(MAGENTA);
    }
    else if (secret == 5) {
        puts(CYAN);
    }
    else if (secret == 6) {
        puts(WHITE);
    }
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