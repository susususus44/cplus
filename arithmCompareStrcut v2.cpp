#include <iostream>
using namespace std;
struct Employee {
    string name;
    short id;
    int age;
    double salary;
};
int main() {
    Employee ivan {"Ivan", 0, 27, 75353.17};
    Employee petr {"Petr", 1, 30, 64464.35};
    Employee igor {"Igor", 2, 30, 61456.92};    
    cout << "Имя: " << ivan.name << endl;
    cout << "ID: " << ivan.id << endl;
    cout << "Возраст: " << ivan.age << endl;
    cout << "Зарплата: " << ivan.salary << endl;
    puts("Выполняем арифметику с полями структуры");
    int averageAge = (ivan.age + petr.age + igor.age) / 3;
    cout << "Средний возраст сотрудников: " << averageAge << endl;
    if (ivan.salary > petr.salary) {
        puts("Иван зарабатывает больше чем Пётр");
    }
    else if (igor.salary < petr.salary) {
        puts("Игорь зарабатывает меньше, чем Пётр");
    }
    else {
        puts("Иван и игорь зарабатывают одинаково");
    }
    puts("Изменение зарплаты Ивана");
    double salary = 0.0;
    puts("Введите новую зарплату ивана");
    cin >> ws >> salary;
    Employee ivanNewcard {"Ivan", 0, 27, salary};
    cout << "Новая зарплата ивана: " << ivanNewcard.salary << endl;
    return 0;
}