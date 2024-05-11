#include <iostream>
using namespace std;

struct Worker
{
    int id;
    string name;
    string position;
    double salary;
};
int main()
{
    puts("Введите id работника");
    Worker person;
    cin >> person.id;
    puts("Введите имя работника");
    getline(cin >> ws, person.name);
    puts("Введите должность работника"); // its prob gonna just be the same thing over and over again
    getline(cin >> ws, person.position);
    puts("Введите зарплату работника");
    cin >> person.salary;
    cout << "Вы ввели: " << person.id << ' ' << person.name << ' ' << person.position << ' ' << person.salary << '\n';
    return 0;
}