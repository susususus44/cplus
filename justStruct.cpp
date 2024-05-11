#include <iostream>
using namespace std;
struct Person {
    string name;
    short age;
    double growth;
};
struct Card {
    int id;
    string name;
    short age;
    char classRoom;
};
int main() {
    cout << "Виды инициализацмй полей структуры\nИнициализация с помощью списка\n";
    Person man {"Alex", 23, 170.35};
    Person woman {"Mary", 19, 180.36};
    cout << man.name << ' ' << man.age << ' ' << man.growth << '\n';
    cout << woman.name << ' ' << woman.age << ' ' << woman.growth << '\n';
    cout << "Инициализация полей структуры с помощью переменных\n";
    int id = 1;
    string  firstName = "Igor";
    short old = 18;
    char clRoom = 'a';
    Card student {id, firstName, old, clRoom};
    cout << student.id << ' ' << student.name << ' ' << student.age << ' ' << student.classRoom << '\n';
    cout << "Иницилизация полей структуры пользовательским вводом\n";
    puts("Введите id школьника, возраст и букву класса по порядку через пробел");
    id  = 0, old = 0;
    cin >> id >> old >> clRoom;
    Card schoolboy {id, firstName, old, clRoom};
    cout << schoolboy.id << ' ' << schoolboy.name << ' ' << schoolboy.age << ' ' << schoolboy.classRoom << '\n';
    return 0;
}