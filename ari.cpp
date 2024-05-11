#include <iostream>
using namespace std;

//ari.cpp

int main()
{
    // Массив типа char (символьный массив)
    // Массив - коллекция (множество) однотипных елементов 
    char strAlex[] = {"Alex"};
    char strProg[] = {"Programmer"};
    cout << strAlex << '\t' << strProg << endl;
    int sizeArr = (sizeof(strAlex) / sizeof(strAlex[0]) -1);
    cout << "Размер массива: " << sizeArr << endl;
    string alexStr = "Алекс";
    string alexProg = "Програмист";
    string total = alexStr + alexProg;
    cout << total << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=\n";
    int a = 5, b = 6;
    int result = a + (b - 3);
    cout << result << endl;
    return 0;
}

