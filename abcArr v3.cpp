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
    puts("В обратном порядке");
    for (int i = 26; i >= 0; --i) {
        cout << alphabet[i];
    }
    cout << endl;
    puts("В обратном порядке способ 2");
    i = 0;
    for (char abc = 'z'; abc >= 'a'; --abc, ++i) {
        cout << (alphabet[i] = abc);
    }
    cout << endl;
    return 0;
}
