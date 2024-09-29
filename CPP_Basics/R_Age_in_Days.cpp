#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int year = 0, month = 0, day = 0;

    while (a >= 365)
    {
        a = a - 365;
        year++;
    }
    while (a >= 30)
    {
        a = a - 30;
        month++;
    }
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << a << " days";

}