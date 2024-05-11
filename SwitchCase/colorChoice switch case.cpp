#include <iostream>
using namespace std;
const auto RED = "\e[41    \e[0m";
const auto GREEN = "\e[42    \e[0m";
const auto YELLOW = "\e[43    \e[0m";
const auto BLUE = "\e[44    \e[0m";
int main() {
    puts("Нужно выбрать цвет: красный 0, зеленый 1, желтый 2, синий 3");
    int userChoice = 0;
    cin >> ws >> userChoice;
    switch (userChoice)
    {
        case 0:
            puts(RED);
            break;
        case 1:
            puts(GREEN);
            break;
        case 2:
            puts(YELLOW);
            break;
        case 3:
            puts(BLUE);
            break;
        default:
            puts("неизвестный цвет");
            break;
    }
    return 0;
}