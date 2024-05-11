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
    if (idPerson == alex.id) {
        personPosition = "Manager";
        cout << alex.id << ' ' << alex.name << ' ' << alex.age << ' ' << personPosition << " id должности: " << (int)alex.pos << endl;
    }
    else if (idPerson == gleb.id) {
        personPosition == "Programmer";
        cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age << ' ' << personPosition << " id должности: " << (int)gleb.pos << endl;
    }
    else if (idPerson == andry.id) {
        personPosition = "Director";
        cout << andry.id << ' ' << andry.name << ' ' << andry.age << personPosition << " id должности: " << (int)andry.id << endl;
    }
    else {
        personPosition = "Unknown";
        cout << personPosition << endl;
    }
    return 0;
}
