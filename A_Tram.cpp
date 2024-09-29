#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    int max = 0;
    while (n--)
    {
        int exit, enter;
        cin >> exit >> enter;
        total = total + enter - exit;
        if (total > max)
        max = total;
    }
    cout << max;
}