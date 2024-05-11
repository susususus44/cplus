#include <iostream>
using namespace std;
int main()
{
    puts("Сколько вам лет");
    int age = 0;
    cin >> ws >> age;
    if (age < 14) {
        puts("Вам рано получать паспорт!");
        main();
    }
    else {
        puts("Идите получать паспорт!");
    }
    return 0
    return 0;
}