#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    puts("Введите количество протонов");
    int userChoice = 0;
    cin >> ws >> userChoice;
    switch userChoice:
    {
        case 1:
            puts("Это водород");
            break;
        case 2:
            puts("Это гелий");
            break;
        case 3:
            puts("Это литий");
            break;
        default:
            puts("Это чтото другое");
            break;
    }
    return 0;
}