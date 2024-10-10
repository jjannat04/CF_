#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m; // nm
    while (n > 9){
        m = n % 10;
        n = n / 10;
    }
    // cout << "n is " << n << endl;
    //cout << "m is " << m << endl;
    if ( n % m == 0 || m % n == 0) cout << "YES";
    else cout << "NO";
}