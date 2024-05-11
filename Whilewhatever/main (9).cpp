#include <iostream>
using namespace std;
enum Telecom { RUSSIA = 7, JAPAN = 81, CHINA = 86, TURKEY = 90, GREECE = 30, GERMANY = 49, IRAN = 98, ITALY = 39 };
int main() {
    Telecom rus = RUSSIA, jap = JAPAN, chi = CHINA, tur = TURKEY, gre = GREECE, ger= GERMANY, iran = IRAN, italy = ITALY;
    cout << "Россия " << rus << endl <<  "Япония " << jap << endl <<  "Китай " << chi << endl << "Турция " << tur << endl << "Греция " << gre << endl << "Германия " << ger << endl << "Иран " << iran << endl << "Италия " << italy << endl;
    return 0;
}