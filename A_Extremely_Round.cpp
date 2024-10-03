// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int n;
//     int count = 10;
//     while (t--)
//     {
//         cin >> n;
//         if (n >= 10)
//         cout << n << endl;
        
//     }
// }

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a != b && a != c)
        cout << a;
        else if (b != a && b != c)
        cout << b;
        else 
        cout << c;
    }
}