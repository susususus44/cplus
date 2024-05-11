#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    puts("Введите слово из 4 букв");
    string word;
    const int FOUR_LETTERS = 4;
    getline(cin >> ws, word);
    short countChars = word.length();
    /*
    if (countChars < FOUR_LETTERS) {
        puts("Мало букв");
    }
    else if (countChars > FOUR_LETTERS) {
        puts("Много букв");
    }
    else if (countChars == FOUR_LETTERS) {
        puts("Ура.");
    }*/
    while (true) {
        getline(cin >> ws, word);
        short countChars = word.length();
        if (countChars  < FOUR_LETTERS) { puts("Мало букв"); }
        else if (countChars > FOUR_LETTERS) { puts("Много букв"); }
        else { puts("ура"); }
    }
    return 0;
}