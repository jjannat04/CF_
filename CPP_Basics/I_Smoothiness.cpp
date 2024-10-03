#include <bits/stdc++.h>
using namespace std;

int main()  
{
    int n;
    cin >> n;
    int s;
    int max = -1;
    int index = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s > max)
        {
            max = s;
            index = i;
        }
    }
    cout << index << endl;
}