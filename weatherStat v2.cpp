#include <iostream>
using namespace std;
enum class Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};
struct Weather
{
    int hiTemp;
    int lowTemp;
    float actualRainfall;
    float recordRainfall;
};
int main() {
    Weather weatherlist[12];
    for (Month i = Month::JAN; i <= Month::JAN; ++(int&)i) {
        cout << (int&)i << " месяц. " << "Высокая температура : ";
        cin >> weatherlist[(int&)i].hiTemp;
        cout << "Низкая температура : ";
        cin >> weatherlist[(int&)i].lowTemp;
        cout << "Актуальные осадки : ";
        cin >> weatherlist[(int&)i].actualRainfall;
        cout << "Рекордные осадки : ";
        cin >> weatherlist[(int&)i].recordRainfall;
    }
    cout << "\n Month \t hiTemp\t lowTemp\t ActualRain\t RecordRain\n";
    for (Month i = Month::JAN; i <= Month::MAR; ++(int&)i) {
        cout << (int&)i << '\t' << weatherlist[(int&)i].hiTemp;
        cout << '\t' << weatherlist[(int&)i].lowTemp;
        cout << "\t\t" << weatherlist[(int&)i].ActualRain;
        cout << "\t\t" << weatherlist[(int&)i].RecordRain << endl;
    }
    return 0;
}
