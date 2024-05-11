#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int arr[] = { 25, 33, 70, 100, 11 };
    const int INDEX = sizeof(arr) / sizeof(*arr);
    double sum = 0;
    for (int a = 0; a < INDEX; ++a) {
        sum += arr[a];
    }
    double average = sum / INDEX;
    cout << average << endl;
    
    return 0;
}