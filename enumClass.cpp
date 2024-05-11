#include <iostream>
using namespace std;
enum class Large_Vehicle { CAR, BUS, TRUCK, };
enum class Small_Vehicle { SMALL_CAR, BIKE, };

enum class Editors { VIM, MICRO, ECLIPSE };
enum class CppEditors { CODE_BLOCK, ECLIPSE, VISUAL_STUDIO_CODE, QT_CREATOR };
int main() {
    CppEditors vs = CppEditors::VISUAL_STUDIO_CODE;
    if (vs == CppEditors::VISUAL_STUDIO_CODE) {
        cout << "VISUAL_STUDIO_CODE: " << (int)vs << endl;
    }
    switch (vs = CppEditors::ECLIPSE) {
        case CppEditors::CODE_BLOCK:
            puts("Code Block");
            break;
        case CppEditors::ECLIPSE:
            puts("Eclipse");
            break;
        case CppEditors::VISUAL_STUDIO_CODE:
            puts("VSCode");
            break;
        case CppEditors::QT_CREATOR:
            puts("QT Creator");
            break;
        default:
            puts("?")
            break;
    }
    return 0;
}