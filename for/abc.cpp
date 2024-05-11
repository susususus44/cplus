#include <iostream>
using namespace std;
int main()
{
    puts("Англиский алфавит");
    for (char abc = 'a'; abc <= 'z'; ++abc) {
        cout << abc << ' ';
    }
    cout << '\n';
    puts("по таблице ASCII"); 
    for (int abc = 97; abc <= 122; ++abc) {
        cout << (char)abc << ' ';
    }
    cout << '\n';
    puts("С порядковой нумерацией");
    for (char abc = 'a'; abc <= 'z'; ++abc) {
        static int counter = 0;
        ++counter;
        cout << 'a' << counter << ' ' << abc << ' ';
    }
    cout << '\n';
    puts("Теперь в обратном порядке");
    for (char abc = 'z'; abc >= 'a'; --abc) {
        cout << abc << ' ';
    }
    cout << endl;
    return 0;
}