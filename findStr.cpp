#include <iostream>
using namespace std;
int main()
{
    string phrase = "I also learn English";
    puts("Поиск подстроки в фразе");
    if (phrase.find("n") == string::npos) 
        puts("Не найдено");
    else {
        puts("Есть!");
    }
    return 0;
}