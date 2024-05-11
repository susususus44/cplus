#include <iostream>
using namespace std;
enum Week { MONDAY = 1, TUESDAY, WEDNESDAY, THRUSDAY, FRIDAY, SATURDAY, SUNDAY };
int main() {
    puts("Нужно выбрать день");
    int yourDay = 0;
    cin >> yourDay;
    //Week day = static_cast<Week>(yourDay);
    Week day = (Week)(yourDay);
    switch (day) {
        case MONDAY:
            puts("Трудный день");
            break;
        case TUESDAY:
            puts("самый нормальный день");
            break;
        case WEDNESDAY:
            puts("самый нормальный день");
            break;
        case THRUSDAY:
            puts("самый нормальный день");
            break;
        case FRIDAY:
            puts("убейте");
            break;
        case SATURDAY:
            puts("хоть один день свободен от        фигни");
            break;
        case SUNDAY:
            puts(".");
            break;
        default:
            puts("Всего 7 суток в неделе");
            break;
    }
    return 0;
}