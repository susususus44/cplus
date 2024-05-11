#include <iostream>
using namespace std;
enum Digits {
    ZERO,
    ONE,
    TWO,
    // THREE = 10, // следующее будет это плюс 1
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN
}
int main() {
    puts("Доступ к перечислителям напрямую");
    cout << ZERO << ' ' << ONE << endl;
    puts("Доступ к константам перечислениям через индентификатор");
    Digits zero = ZERO;
    Digits one = ONE;
    Digits two = TWO, three = THREE, four = FOUR;
    cout << zero << ' ' << one << ' ' << two << ' ' << four << ' ' << FIVE << endl;
    int six = SIX;
    cout << six << endl;
    return 0;
}