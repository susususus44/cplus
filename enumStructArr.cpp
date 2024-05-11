#include <iostream>
using namespace std;
enum class Month { JAN, FEB, MAR };
struct Type
{
    float num = 2.5;
    string name = "Число";
};
int main()
{
    Type List[3];
    for (Month i = Month::JAN; i <= Month::MAR; ++(int&)i) {
        cout << '#' << (int&)i;
        cout << ' ' << List[(int&)i].name;
        cout << ' ' << List[(int&)i].num << endl;
    }
    return 0;
}