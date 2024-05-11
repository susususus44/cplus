#include <iostream>
using namespace std;
enum class Position
{
    manager, programmer, director
};
struct InputStruct {
    int id;
    string userName;
    Position pos;
    int age;
};
int main() {
    puts("Введите id");
    int id;
    cin >> id;
    puts("Введите имя");
    string userName;
    getline(cin >> ws, userName);
    puts("Введите возраст");
    int age;
    cin >> age;
    InputStruct alex { id, userName, Position::director, age };
    cout << "id: " << alex.id << " name: " << alex.userName << " , age: " << alex.age << " , id должности: " << (int)alex.pos << endl;
    return 0;
}
