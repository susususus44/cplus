#include <algorithm>
#include <iostream>
using namespace std;

enum { WORD, HINT, NUM_FIELDS = 5 };

int main()
{
    srand(time(0));
    char again = 'y';
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] 
    {
        {"wall", "Тебе не хочется обо что-нибудь удариться головой? "},
        {"glasses", "Это может помочь вам увидеть вопрос "},
        {"word", "Продвигается медленно, не так ли? "},
        {"dog", "Лает, кусает, в дом не пускает "}
    };
    int choice = (rand() % NUM_WORDS);
    string guessword = WORDS[choice][WORD];
    string hintword = WORDS[choice][HINT];
    string jumble = guessword;
    random_shuffle(jumble.begin(), jumble.end());
    cout << "\t\t\tДобро пожаловать в игру \"Угадайка\"\n\n";
    cout << "Посмотри на буквы и сложи в уме угадываемое слово\n";
    cout << "Введи слово 'hint' для подсказки\n";
    cout << "Зашифрованное слово " << jumble;
    string guess;
    cout << "\n\nВаше предложение ";
    getline(cin >> ws, guess);
    while (guess != guessword) {
        if (guess == "hint") {
            cout << hintword;
        }
        else {
            cout << "Извините это не то";
        }
        cout <<"\n\nВаше предложение ";
        if (guess == guessword) {
            cout << "\nВы угадали!" << endl;
        }
        cout << "Желаете продолжить? y/n";
        cin >> again;
        if (again == 'y') { main(); }
        else { cout << "Спасибо за игру!\n"; exit(0); }
    }
    return 0;
}