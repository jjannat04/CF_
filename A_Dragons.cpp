#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s = 3, n = 3;
    // cin >> s >> n;
    vector<int>sd = {4,1,14};
    vector<int>bonus={10, 10, 100};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> sd[i];
    //     cin >> bonus[i];
    // }
    vector<int>old(sd);

    sort(sd.begin(), sd.end());

    for (int i = 0; i < n; i++)
    {
        int b;
        for (int j = 0; j < n; j++)
        {
            if (sd[i] == old[j])
            b = j;
        }
        if (s > sd[i])
        s += bonus[b];
        
        else 
        {
            cout << "NO";
            return 0;
        } 

    }
    cout << "YES";
}