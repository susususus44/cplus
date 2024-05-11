#include <iostream>
#include <unistd.h>
#include <random>
using namespace std;
int main()
{
    // Сочетание, подходящее для большинства задач
    // -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    random_device rd; // Генератор
    mt19937 gen(rd()); // Механизм рандома
    // -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-
    uniform_int_distribution<> dist(3, 6); // Диапозон
    if(dist(gen) > 6 || dist(gen) < 3) {
        cout << '\7';
        return 0;
    }
    cout << dist(gen) << endl;
    return 0;

}