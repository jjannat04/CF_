#include <iostream>

using namespace std;

int main()
{
    // long long a, b, c, d;
    // cin >> a >> b >> c >> d;
    // long long multi = (a*b*c*d);
    // long long last = multi % 100;
    // cout << last;

    // overflows, multi is > 10e9

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Calculate the result in steps, taking mod 100 after each multiplication
    long long result = a % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    if (result < 9)
    cout << "0" << result;
    else 
    cout << result << endl;
    return 0;

}