#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Рандомное от 1 до 5: " << 1 + (rand() % 5) << endl;
    int secret = 10 + (rand() % 50);
    cout << "Рандомное от 10 до 50: " << secret << endl;
    cout << "\nВычесление рандомного числа: \n" "Напишите числа от и до: \n" << "\nОт: ";
    int start = 0, end = 0, result = 0;
    cin >> start;
    cout << "\nДо: ";
    cin >> end;
    result = start + (rand() % end);
    cout << "\nИтого: " << result;
    return 0;
}