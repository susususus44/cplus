#include <iostream>
using namespace std;

int main()
{
    const bool birthdayMoney = 1;
    const bool newYearMoney = 1;
    cout << "Подарили деньни на ДР: ";
    bool birthday;
    cin >> birthday;
    cout << "Подарили деньни на НГ: ";
    bool newYear;
    cin >> newYear;
    
    cout << "Есть денги на игровую консоль?: " << boolalpha << ((birthdayMoney == birthday) && (newYearMoney == newYear) ? true : false) << endl;
    return 0;
}