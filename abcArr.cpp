#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char alphabet[26];
    int i = 0;
    for (char abc = 'a'; abc <= 'z'; ++abc) {
        alphabet[i] = abc;
        ++i;
    }
    for (auto i : alphabet) { cout << i; }
    cout << endl;
    return 0;
}
