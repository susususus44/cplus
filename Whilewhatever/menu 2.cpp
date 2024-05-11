#include <iostream>
using namespace std;
int main() {
    int choice = 1; // counter =  0;
    do {
        puts("Пожалуйста, выберите нужный пункт меню");
        puts("1) Сложение");
        puts("2) Вычитание");
        puts("3) Произведение");
        puts("4) Частное");
        cin >> choice;
    } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
    cout << "Вы выбрали: " << choice << endl;
    return 0;
}