/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
    float sum = 1;
    int arr[] {1, 10, 3, 5, 5};
    int LENGTH = sizeof(arr) / sizeof(*arr);
    for (int i = 0; i != LENGTH; i++) {
        sum *= arr[i];
    }
    cout << sum << endl;
    return 0;
}