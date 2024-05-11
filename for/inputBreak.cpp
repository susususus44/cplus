#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int count = 0; count < 10; ++ count) {
        cout << "Введите любое нат.число или 0 для выхода: ";
        int val = 0;
        cin >> val;
        if (val == 0) { break; }
        sum += val;
    }
    cout << "Сумма введенных вами чисел " << sum << endl;
    return 0;
}