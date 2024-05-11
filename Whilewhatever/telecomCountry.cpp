#include <iostream>
using namespace std;
enum Telecom { RUSSIA = 7, JAPAN = 81, CHINA = 86, TURKEY = 90 };
int main() {
    Telecom rus = RUSSIA, jap = JAPAN, chi = CHINA, tur = TURKEY;
    cout << "Россия " << rus << endl <<  "Япония " << jap << endl <<  "Китай " << chi << endl << "Турция " << tur << endl;
    return 0;
}