#include <iostream>
using namespace std;
int main()
{
    cout<<"Символьный массив" << endl; 
    char word[] = {"Word!"};
    cout << word << endl;
    cout << "Размер символьного массива" << endl;
    int sizeWord = sizeof(word);
    cout << sizeWord -1 << endl;
    cout <<"Tip: " << typeid(word).name() << endl;
    cout << "Размер массива: " << sizeWord - 1 << " 1-й элемент массива " << *word << endl;
    cout << "Символьный массив" << endl;
    char ch[] {'H', 'e', 'l', 'l', 'o', ',',
               ' ', 'w', 'o', 'r', 'l', 'd', '!'};
    cout << ch << endl;
    puts("Размер символьного массива ch");
    int sizeArr = sizeof(ch);
    cout << sizeArr << ", 1 - ый элемент массива ch: " << *ch << endl;
    puts("Символьные массив и цикл");
    char myCharArr[] {'T', 'o', 't', 'a', 'l'};
    puts(myCharArr);
    cout << "Содержимое массива с помощью цикла " << endl;
    for (auto i : myCharArr ) {cout << i ; } cout << endl;
    cout << "Изменим один элемент символьного массива " << endl;
    myCharArr[0] = '8';
    cout << myCharArr << endl;
    cout << "Изменить все в массиве " << endl;
    const int LENGHT = sizeof(myCharArr);
    int change = 76;
    for (int i = 0; i != LENGHT; ++i) {
        myCharArr[i] = ++change;
    }
    cout << myCharArr << endl;
    cout << "С интересным эффектом " << endl;
    for (int i = 0; i != LENGHT; ++i) {
        myCharArr[i] = ++change;
        cout << myCharArr << ' ';
    }
    cout << endl;
    const int HELLO[] {72, 69, 76, 76, 79};
    for (auto i : HELLO ) {cout << (char)i; }
    cout << endl;
    return 0;
}