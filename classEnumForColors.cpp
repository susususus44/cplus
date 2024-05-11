#include <iostream>
using namespace std;
enum class Colors { RED, WHITE, YELLOW, BLUE, MAGENTA, CYAN, };
int main() {
    /*
    for (Colors col = Colors::RED; col != Colors::CYAN; ++(int&)col) {
        cout << (int)col << ' '; 
    }*/
    cout << endl;
    for (Colors col = Colors::RED; col <= Colors::CYAN; ++(int&)col) {
        cout << (int)col << ' ';
        switch (col) {
            case Colors(0):
                puts("\e[0:41m      \e[0m");
                break;
            case Colors(1):
                puts("\e[0:47m      \e[0m");
                break;
            case Colors(2):
                puts("\e[0:43m      \e[0m");
                break;
            case Colors(3):
                puts("\e[0:44m      \e[0m");
                break;
            case Colors(4):     
                puts("\e[0:45m      \e[0m");
                break;
            case Colors(5):
                puts("\e[0:46m      \e[0m");
                break;
            default:
                puts("What?");
                break;
        }
    }
    return 0;
}