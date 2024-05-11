#include <iostream>
using namespace std;
int main()
{
    static int counter = 0;
    puts("Введите ваш возраст");
    int age = 0;
    cin >> ws >> age;
    if (age < 14) {
        puts("Вам еще рано получать паспорт!");
        ++counter;
        return main();
    }
    else if (age >= 14) {
        cout << "Можно!" << "Неудачных попыток: " << counter << endl;
    }
    return 0;
}