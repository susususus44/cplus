#include <iostream>
using namespace std;
int main() {
    char retry = 'y';
    while (retry == 'y') {
        puts("Вы отлично поиграли, желаете продолжить? (y/n)");
        cin >> retry;
    }
    puts("Ok, bye!");
    return 0;
    /*
    == != <= >= *= 
    */
}