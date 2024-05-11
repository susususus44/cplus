#include <iostream>
#include <cstring>

#include <algorithm>
using namespace std;

int main() {
    char myString[] = "String";
    cout << myString << " содержит " << sizeof(myString) << " букв" << endl;
    cout << myString << " содержит " << strlen(myString) << " букв" << endl;
    cout << "ASCII код каждого элемента строки: ";
    for (unsigned index = 0; index < (strlen(myString)); ++index) {
        cout << (int)myString[index] << ' ';
    }
    cout << endl;
    cout << "Изменим элемент строки" << endl;
    myString[1] = 'v';
    cout << myString << endl;
    cout << "Строки с помощью указателя" << endl;
    const char *chStr = "Alex";
    cout << "chStr " << chStr << endl;
    string str = "seva";
    string more = str;
    cout << "Количество элементов в строке " << more << " = " << more.length() << endl;
    srand(time(0));
    random_shuffle(more.begin(), more.end());
    cout << "В случайном порядке: " << more << endl;
    cout << "Сложение строк" << endl;
    string firstName, lastName;
    cout << "Введите имя: ";
    getline(cin, firstName);
    cout << "Введите фамилмю: ";
    getline(cin, lastName);
    string con = firstName + " " + lastName;
    cout << con << endl;
    cout << "Со строками не получится сделать арифметику\n";
    string num1 = "35";
    string num2 = "20";
    cout << num1 << num2 << endl;
    lastName[0] = 'F';
    cout << "Результат замены: " << lastName << endl;
    cout << "Сравним строки" << endl;
    cout << "Введите 1-е слово" << endl;
    string firstWord, secondWord;
    getline(cin, firstWord);
    cout << "Введите 2-е слово" << endl;
    getline(cin, secondWord);
    if (firstWord != secondWord) {
        cout << "Разные строки" << endl;
    }
    else {
        cout << "Одинаковые строки" << endl;
    }
    bool result = (firstWord == secondWord ? true : false);
    cout << boolalpha << "Это одинаковые слова " << result << endl;
    string arrStr[] {" to ", " be ", " or ", " not "};
    cout << "Печать массива через специальную фому для массивов" << endl;
    for (auto &i: arrStr) {
        cout << i;
    }
    for (int i = 0; i < 2; ++i) {
        cout <<  arrStr[i];
    }
    cout << endl;
    return 0;
}