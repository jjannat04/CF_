
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;

    float rem = n - (int)n;

    if (rem == 0)
    cout << "int " << (int)n;

    else 
    cout << "float " << (int)n << " " << fixed << setprecision(3) << rem;
}