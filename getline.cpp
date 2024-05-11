#include <iostream>
using namespace std;

int main()
{
    string mystr;
    cout << "Как ваше имя: ";
    //cin >> mystr;
    getline(cin, mystr);
    cout << "Привет, " << mystr << '!' << endl;
    cout << "Какой твой любимый фрукт? ";
    getline(cin, mystr);
    cout << "И я люблю " << mystr << '!' << endl;
    return 0;
}