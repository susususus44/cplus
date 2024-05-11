#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char arr_char[] {'H','e','l','l','o'};
    const char *SUB_SIM = "z";
    string char_arr_str = arr_char;
    if (char_arr_str.find(SUB_SIM) != string::npos) {
        cout << SUB_SIM << " подстройка найдена в массиве " << char_arr_str << endl;
    }
    else {
        cout << SUB_SIM << " подстройка не найдена в массиве " << char_arr_str << endl;
    }
    return 0;
}
