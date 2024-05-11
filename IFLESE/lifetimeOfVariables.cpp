#include <iostream>
using namespace std;
int main()
{
    int val = 10;
    if (val == 10) {
        bool result = true; // Тут рождается переменная
        cout << result << '\n';
        // A тут она умирает
    }
    cout << val << endl;
    return 0;
}