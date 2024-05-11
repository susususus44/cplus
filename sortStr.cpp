#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "seva";
    cout << "Количество символов в строке: " << " = " << str.length() << endl;
    cout << "Количество символов в строке: " << " = " << str.size() << endl;
    cout << str << endl;
    puts("Сортивка в порядке возрастания");
    sort(str.begin(), str.end());
    cout << str << endl;
    puts("Сортивка в обратном порядке");
    sort(str.begin(), str.end(), greater<>());
    cout << str << endl;
    puts("Перемещать символы в строке");
    srand(time(0));
    random_shuffle(str.begin(), str.end());
    cout << str << endl;
    return 0;
}