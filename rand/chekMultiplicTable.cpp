#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    cout << boolalpha;
    short one = 0, two = 0, min = 0, max = 9, result = 0, answer = 0;
    one = rand() % (min - max + 1) + min;
    two = rand() % (min - max + 1) + min;
    result =  one * two;
    cout << one << " x " << two << endl;
    cout << "Введите ответ: ";
    cin >> ws >> answer;
    cout << (result == answer ? true : false) << endl;
    cout << (result == answer ? "✅" : "❌") << endl;
    return 0;
}