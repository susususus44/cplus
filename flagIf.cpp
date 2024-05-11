#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    bool flag;
    cin >> flag;
    if (!flag) {
        puts("Первый");
    }
    elese {
        puts("Второй")
    }
    return 0;
}