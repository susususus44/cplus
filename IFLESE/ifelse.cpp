#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 5, m = 0;
    if  (a > b) {
        m = a;
    }
    else {  // (a < b) 
        m = b;
    }
    cout << m << '\n';
    return 0;
}