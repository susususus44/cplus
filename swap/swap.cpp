#include <iostream>
using namespace std;
int main() {
    int num1 = 8, num2 = 10;
    puts("Самый простейший случай применения");
    swap(num1, num2);
    cout << num1 << '\t' << num2 << endl;
    puts("Это работает и с символами");
    char a = 'a', b = 'b';
    swap(a, b);
    cout << a << '\t' << b << endl;
    puts("Со строковыми данными");
    string dog = "Dog", cat = "Cat";
    swap(dog, cat);
    cout << cat << '\t' << dog << endl;
    puts("С массивами");
    int foo[4];
    int boo[] {10, 20, 30, 40};
    swap(foo, boo);
    for (const auto &i : foo) {
        cout << i << ' ';
    }
    cout << endl;
    int arr[] { 1, 2, 3 };
    swap(arr[0], arr[1]);
    for (const auto &i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}