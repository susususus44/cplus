#include <iostream>
using namespace std;
int main() {
    double sum = 0;
    puts("Введите 5 целых чисел в строку, через пробел, по очереди");
    int aver[5] {0};
    int getNum = 0;
    for (auto i : aver) {
        cin >> getNum;
        aver[i] = getNum;
    }
    const short SIZE = sizeof(aver) / sizeof(*aver);
    for (auto i : aver) {
        sum += i;
    }
    cout << "Среднее арифметическое: " << sum / SIZE << endl;
    return 0;
}