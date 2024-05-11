#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int secret = 1 + (rand() % 5);
    cout << "Угадай число!\n";
    int answer = 0;
    cin >> answer;
    if (answer = secret)
    {
        cout << "Верно!";
    }
    return 0;
}