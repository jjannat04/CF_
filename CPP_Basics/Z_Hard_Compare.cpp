#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 1 && c == 1)
    cout << "NO";


    else if ((a==c || a > c) && b > d)
    cout << "YES";
    else if ((a==c || a < c) && b < d)
    cout << "NO";
    else if ((b==d || b > d) && a > c)
    cout << "YES";
    else if ((b==d || b < d) && a < c)
    cout << "NO";
    else 
    {

        if (pow(a, b) == pow(c,d))
        cout << "NO";
        else if (pow(a, b) > pow(c,d))
        cout << "YES";
        else if (pow(a, b) <= pow(c,d))
        cout << "NO";
    }
}