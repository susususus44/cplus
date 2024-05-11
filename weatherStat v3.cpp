#include <iostream>
using namespace std;
enum class Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};
struct Weather
{
    int hiTemp;
    int low;
    float actualRainfall;
    float recordRainfall;
};
int main() {
    Weather weatherlist[12];
    for (Month i = Month::JAN; i <= Month::DEC; ++(int&)i) {
        cout << (int&)i << " месяц: " << "Высокая температура: ";
        cin >> weatherlist[(int&)i].hiTemp;
        cout << "Низкая температура: ";
        cin >> weatherlist[(int&)i].low;
        cout << "Актуальные осадки: ";
        cin >> weatherlist[(int&)i].actualRainfall;
        cout << "Рекордные осадки: ";
        cin >> weatherlist[(int&)i].recordRainfall;
        cout << endl;
    }
    for (Month i = Month::JAN; i <= Month::MAR; ++(int&)i) {
        cout << (int&)i << '\t' << weatherlist[(int&)i].hiTemp;
        cout << '\t' << weatherlist[(int&)i].low;
        cout << "\t\t" << weatherlist[(int&)i].actualRainfall;
        cout << "\t\t\t" << weatherlist[(int&)i].recordRainfall << endl;
    }
    return 0;
}
