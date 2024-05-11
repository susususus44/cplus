/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
enum class Type { SECRETARY, MANAGER, LABOURER };
struct Date {
    int day;
    int month;
    int year;
};
struct Employee
{
    int id;
    float salary;  
    Type worker;
    Date date;
};
int main()
{
    Employee job1;
    cout << "Введите id работника: ";
    cin >> ws >> job1.id;
    cout << "Введите 1-ю должности работника ";
    char typeJob;
    cin >> typeJob;
    switch (typeJob) {
        case 's':
            job1.worker = Type::SECRETARY;
            break;
        case 'm':
            job1.worker = Type::MANAGER;
            break;
        case 'l':
            job1.worker = Type::LABOURER;
            break;
        default:
            return 0;
            break;
    }
    string post;
    switch (job1.worker) {
        case Type::SECRETARY:
            post = "Секретарь";
            break;
        case Type::MANAGER:
            post = "Менеджер";
            break;
        case Type::LABOURER:
            post = "Рабочий";
            break;
        default:
            return 0;
            break;
    }
    cout << "Укажите зарплату работника ";
    cin >> ws >> job1.salary;
    cout << "Укажите дату приёма на работу";
    cin >> job1.date.day >> job1.date.month >> job1.date.year;
    cout << "id работника: " << job1.id << ", должность: " << post << ", зарплата: " << job1.salary << ", принят на работу: " << job1.date.day << '.' << job1.date.month << '.' << job1.date.year << endl;
    return 0;
}