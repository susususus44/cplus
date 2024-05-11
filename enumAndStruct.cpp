#include <iostream>
using namespace std;
enum class MonsterType {
    OGRE, GOBLIN SKELETON, ORC, TROLL
};
struct Monster {
    MonsterType type;
    string name;
    double health;
}
int main() {
    Monster Monster = { MonsterType::OGRE, "Bern", 37.7 };
    string monsterName;
    if (monster.type == MonsterType::OGRE) { monsterName = "Shrek"; }
    cout << "Тип монстра: " << "Ogre " << "Имя монстра: " << monsterName << endl;
    return 0;
}