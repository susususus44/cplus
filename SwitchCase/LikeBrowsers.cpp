#include <iostream>
using namespace std;
int main()
{
    puts("Чтобы выбрать пункт меню, введите его номер.");
    puts("1. Firefox");
    puts("2. Chrome");
    puts("3. Edge");
    puts("4. Opera");
    puts("5. Arc");
    int choice = 0;
    cin >> choice;
    switch (choice)
    {
        case 1:
            puts("Вам нравится Firefox");
            return main();
            break;
        case 2:
            puts("Вам нравится Firefox");
            return main();
            break;
        case 3:
            puts("Вам нравится Firefox");
            return main();
            break;
        case 4:
            puts("Вам нравится Firefox");
            return main();
            break;
        case 5:
            puts("Вам нравится Arc");
            return main();
            break;
        default:
            puts("Что");
            return main();
            break;
    }
    cout << endl;
    return 0;
}