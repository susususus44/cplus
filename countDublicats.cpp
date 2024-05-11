#include <iostream>
using namespace std;
int main() {
    puts("Введите любое натуральное число. Для завершения введите любую букву");
    int firstUserNum = 0, otherUserNum = 0;
    // читаем 1-е число чтобы убедиться о начилии данных для обработки
    if (cin >> firstUserNum) {
        int counter = 1;
        while (cin >> otherUserNum) {
            if (otherUserNum == firstUserNum) {
                ++counter;
            }
            else {
                cout << firstUserNum << " встречается "
                    << counter << "раз\n";
                firstUserNum = otherUserNum;
                counter = 1;
            }
        }
        cout << firstUserNum << "  повторяется " << counter << " раз(а)";
    }
    return 0;
}