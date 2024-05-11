#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    /*
    string word1 = "Moscow", word2 = "Tula", word3 = "Vladivostok";
    puts("1-й способ");
    string max;
    max = (word1.size() > word2.size() ? word1 : word2);
    if (max.size() < word3.size())
        max = word3;
    cout << max << endl;
    string min;
    min = (word1.size() < word2.size() ? word1 : word2);
    if (word3.size() < min.size()) { min = word3; }
    cout << min << endl;
    */
    int a = 1, b = 5, c = -2;
    int max2 = max({a, b, c});
    cout << "Максимум " << max2 << endl;
    int min2 = min({a, b, c});
    cout << "Минимум " << min2 << endl;
    int aa = 43, bb = 2, cc = 3, dd = 100;
    cout << "Минимальное без библиотеки " << min(aa, min(bb, min(cc, dd))) << endl;
    cout << "Максимальное без библиотеки " << max(aa, max(bb, max(cc, dd))) << endl;
    int arr[3] {15, 3, 80};
    int maxx = 0;
    for (int i = 0; i < 3; ++i) {
        if (arr[i] > maxx)
            maxx = arr[i];
    }
    cout << "Наибольшее число " << maxx << endl;
    int minn = INT_MAX;
    for (int i = 0; i < 3; ++i) {
        if (arr[i] < minn) {
            minn = arr[i];
        }
    }
    cout << "Минимальное число " << minn << endl;
    
    return 0;
}