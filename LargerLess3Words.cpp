#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    string word1 = "Moscow", word2 = "Tula", word3 = "Vladivostok";
    puts("1-й способ");
    string max1;
    max1 = (word1.size() > word2.size() ? word1 : word2);
    if (max1.size() < word3.size())
        max1 = word3;
    cout << max1 << endl;
    string min1;
    min1 = (word1.size() < word2.size() ? word1 : word2);
    if (word3.size() < min1.size()) { min1 = word3; }
    cout << min1 << endl;
    puts("2-й способ");
    int lengthWord1 = word1.length(), lengthWord2 = word2.length(), lengthWord3 = word3.length();
    cout << lengthWord1 << ' ' << lengthWord2 << ' ' << lengthWord3 << endl;
    int maximum = max({lengthWord1, lengthWord2, lengthWord3});
    if (maximum == lengthWord1) {
        cout << "Самое длинное слово " << word1 << endl;
    }
    else if (maximum == lengthWord2) {
        cout << "Самое длинное слово " << word2 << endl;
    }
    else if (maximum == lengthWord3) {
        cout << "Самое длинное слово " << word3 << endl;
    }
    int minimum = min({lengthWord1, lengthWord2, lengthWord3});
    if (minimum == lengthWord1) {
        cout << "Самое короткое слово " << word1 << endl;
    }
    else if (minimum == lengthWord2) {
        cout << "Самое короткое слово " << word2 << endl;
    }
    else if (minimum == lengthWord3) {
        cout << "Самое короткое слово " << word3 << endl;
    }
    puts("3-й способ");
    string maxi;
    if (word1.size() > word2.size() > word3.size()) {
        maxi = word1;
    }
    else if (word2.size() > word1.size() > word3.size()) {
        maxi = word2;
    }
    else {
        maxi = word3;
    }
    cout << "Максимальная " << maxi << endl;
    puts("4-й способ");
    if (word1.size() > word2.size()) {
        if (word1.size() > word3.size()) {
            maxi = word1;
        }
        else
            maxi = word3;
    }
    else {
        if (word2.size() > word3.size()) {
            maxi = word2;
        }
        else
            maxi = word3;
    }//that's a hella lot of .size dayum
    cout << maxi;
    /*
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
    */
    return 0;
}