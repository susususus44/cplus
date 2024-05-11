#include <iostream>
using namespace std;
enum class Position
{
    manager, programmer, director
};
struct Person
{
    int id;
    string name;
    short age;
    Position pos;
};
int main() {
    puts("Введите id для поиска работника");
    Person alex { 0, "Alex", 23, Position::manager };
    Person gleb { 1, "Gleb", 20, Position::programmer };
    Person andry { 2, "Andry", 21, Position::director };
    int idPerson = 0;
    string personPosition;
    bool exit = false;
    do {
        puts("Введите id для поиска");
        cin >> ws >> idPerson;
        switch (idPerson)
        {
            case 0:
                personPosition = "Manager";
                cout << alex.id << ' ' << alex.name << ' ' << alex.age << ' ' << personPosition << endl;
                break;
            case 1:
                personPosition = "Programmer";
                cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age << ' ' << personPosition << endl;
                break;
            case 2:
                personPosition = "Director";
                cout << andry.id << ' ' << andry.name << ' ' << andry.age << ' ' << personPosition << endl;
                break;
            default:
                personPosition = "Unknown";
                cout <<  personPosition << endl;
                break;
        }
        puts("Желаете продолжить поиск? 1 - да, 0 - нет");
        cin >> exit;
    } while (exit);
    return 0;
}
