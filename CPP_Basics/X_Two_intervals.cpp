#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >>  c >> d;


    if (c >= a && c <= b)
    {    
        cout << c << " ";
        if (d >= a && d <= b)
        cout << d;
        else if (b >= c && b <= d)
        cout << b;
    }

    else if (a >= c && a <= d)
    {    
        cout << a << " ";
        if (d >= a && d <= b)
        cout << d;
        else if (b >= c && b <= d)
        cout << b;
    }
    
    else 
    cout << "-1";
}