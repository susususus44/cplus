#include <iostream>
using namespace std;
int main()
{
    puts("Чтобы выбрать пункт меню, введите его номер.");
    puts("1. Играть за скелета");
    puts("2.  Играть за орка");
    puts("3. Играть за гоблина");
    puts("4.    Достижения");
    puts("5.   Выйти из игры");
    int choice = 0;
    cin >> choice;
    switch (choice)
    {
        case: 0
            puts("Скелет");
            return main();
            break
        case: 1
            puts("Орк");
            return main();
            break
        case: 2
            puts("Гоблин");
            return main();
            break
        case: 3
            puts("Достижения");
            return main();
            break
        case: 4
            exit(0);
            break
    }
    return 0;
}