#include <iostream>=

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int g, m, l;
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            g = a; m = b; l = c;
        }
        else if (b <= c)
        {
            g = a; m = c; l = b;
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            g = b; m = a; l = c;
        }
        else if (a <= c)
        {
            g = b; m = c; l = a;
        }
    }
    else if (c >= b && c >= a)
    {
        if (b >= a)
        {
            g = c; m = b; l = a;
        }
        else if (b <= a)
        {
            g = c; m = a; l = b;
        }
    }


    cout << l << endl;
    cout << m << endl;
    cout << g << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}