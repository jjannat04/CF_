#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int count = 0;
    for (int i = 1; ; i++)
    {
        cin >> a;
        if (a == 1)
        count++;

        if (count == n)
        {cout << i;
        break;}
    }
}