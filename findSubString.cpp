#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char char_arr[] = "Hello, World!";
    const char *SUB_STRING = "Alex";
    string char_arr_str = char_arr;
    if (char_arr_str.find(SUB_STRING) != string::npos) {
        cout << SUB_STRING << " подстройка найдена в фразе: " << char_arr_str << endl;
    }
    else
    {
        cout << SUB_STRING << " подстройка не найдена в фразе: " << char_arr_str << endl;
    }
    return 0;
}
