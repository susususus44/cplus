#include <iostream>
using namespace std;
int main() {
    int counter = 0;
    while (true) {
        ++counter; // Инкремент
        if (counter > 10) { // доходим до 10
            break;
        }
        if (counter == 5) {
            continue; // Пропускаем число
        }
        cout << counter << endl;
    }
    return 0;
}