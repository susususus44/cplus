// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример выбора меню в цикле
// menuWhile.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    char again = 'y';
    while (again == 'y') { // Пока условие true, цикл выполняется
        puts("Choose menu 1, 2 or 3");
        puts("Menu one ");
        puts("Menu two ");
        puts("Menu three ");
        int userChooseMenu = 0;
        cin >> userChooseMenu;
        switch (userChooseMenu)
        {
            case 1:
                puts("You chose the menu one");
                break;
            case 2:
                puts("You chose the menu 2");
                break;
            case 3:
                puts("You chose the menu 3");
            default:
                puts("You havent chose anything");
                break;
        }
        puts("Для продолжения введите 'y', и другую букву для выхода.");
        cin >> again;
    }
    puts("Goodbye!");
    return 0;
}
// Д.З.
// Output:
/*
Choose menu 1, 2 or 3
Menu one 
Menu two 
Menu three 
1
You chose the menu one
Для продолжения введите 'y', и другую букву для выхода.
y
Choose menu 1, 2 or 3
Menu one 
Menu two 
Menu three 
2
You chose the menu 2
Для продолжения введите 'y', и другую букву для выхода.
n
Goodbye!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//   