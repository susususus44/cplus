#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha;
    bool cond, coolFan, result;
    cout << "Кондиционер работает? ";
    cin >> cond;
    cout << "Кулер процессора работает? ";
    cin >> coolFan;
    result = cond && coolFan;
    cout << "Исправность сервера: " << result << endl;
    return 0;
}