#include <iostream>
using namespace std;

// Логические вентили - (англ - Gate) базовый елемент програмной и цифровой логики

int main() {
    cout << boolalpha;
    bool a = true; // Логическая единица
    bool b = false;
    cout << "a = true, b = false\n\n";
    cout << "a == b: " << (a == b) << endl; // Сравнение (эквиваленция)
    cout << "a and b: " << (a and b) << endl; // Логическое И (дизъюнкция)
    cout << "a && b: " << (a && b) << endl; // То же самое И
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "a or b: " << (a or b) << endl; // Логическое ИЛИ (конъюкция)
    cout << "a || b: " << (a or b) << endl; // То же самое ИЛИ
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "a not_eq: " << (a not_eq b) << endl; // Логическое НЕРАВЕНСТВО
    cout << "a != b: " << (a != b) << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "not a: " << not a << ", not b: " << not b << endl; // Лоническое НЕ (отричание)
    cout << "!a" << !a << ", !b " << !b << endl;
    cout << "!a && !b: " << (!a && !b) << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "((a == b) && (a !=  b)): " << ((a == b) && (a !=  b)) << endl;
    cout << "(a == b) || (a != b): " << ((a == b) || (a != b)) << endl;
    cout << "(a == b) != (a != b): " << ((a == b) != (a != b)) << endl;

    return 0;
}