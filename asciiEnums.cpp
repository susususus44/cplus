#include <iostream>
using namespace std;
enum Punctuation_1 {
    DOT = 46,
    SLASH,
    COMMA = 44,
    DASH,
    COLON = 58,
    SEMICOLON,
};

enum Punctuation_2 {
    LEFT_BRACKET = 40,
    RIGHT_BRACKET,
};
int main() {
    cout << "Круглые скобки - " << (char)LEFT_BRACKET << (char)RIGHT_BRACKET << '\n';
    Punctuation_1 semicolon = SEMICOLON;
    Punctuation_1 colon = COLON;
    cout << "Точка с запятой - " << (char)semicolon << endl;
    cout << "Двоеточие - " << (char)colon << endl;
    Punctuation_1 punct = DASH;
    char getUserChar;
    puts("Введите символ тире");
    cin >> getUserChar;
    if (getUserChar == (char)punct) {
        cout << "Символ: " << (char)punct << '\n';
    }
    else {
        puts("no");
    }
    puts("Введите один из символов: '.', '/', '-', ':', ';'");
    cin >> getUserChar;
    switch (getUserChar) {
    case Punctuation_1::DOT:
        cout << "Вы ввели: " << (char)Punctuation_1::DOT << endl;
        break;
    case Punctuation_1::SLASH:
        cout << "Вы ввели: " << (char)Punctuation_1::SLASH << endl;
        break;
    case Punctuation_1::COMMA:
        cout << "Вы ввели: " << (char)Punctuation_1::COMMA << endl;
        break;
    case Punctuation_1::DASH:
        cout << "Вы ввели: " << (char)Punctuation_1::DASH << endl;
        break;
    case Punctuation_1::COLON:
        cout << "Вы ввели: " << (char)Punctuation_1::COLON << endl;
        break;
    case Punctuation_1::SEMICOLON:
        cout << "Вы ввели: " << (char)Punctuation_1::SEMICOLON << endl;
        break;
    default:
        puts("What?");
    }
    return 0;
}