#include <iostream>
using namespace std;
int main()
{
    int num = 0, from = 0, to = 0;
    puts("Введите число и диапозон от 1-10");
    cin >> num >> from >> to;
    for (int i = from; i <= to; ++i) {
        cout << num << '*' << i << '=' << num * i << endl;
    }
    return 0;
}