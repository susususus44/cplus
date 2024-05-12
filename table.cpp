/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    cout << "Таблица с помощью одного стринга" << endl;
    string col_row = "|_|_|_|";
    for (int i = 0; i < 4; i++)
        cout << col_row << endl;
    cout << "\nТаблица с помощью 2-х стрингов" << endl;
    string col = "| | | |";
    string row = " _ _ _";
    for (int i = 0; i < 3; i++) {
        cout << col << endl;
        cout << row << endl;
    }
    return 0;
}