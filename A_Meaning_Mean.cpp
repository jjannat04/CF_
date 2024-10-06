#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main()

{
    int t;
    cin >> t; 
    while (t--)
    {
        
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        while (v.size() != 1)
        {
            sort(v.begin(), v.end());
            int fl = (floor)((v[0] + v[1])/2);
            v.push_back(fl);
            v.erase(v.begin());
            v.erase(v.begin());

        }
        cout << v[0] << endl;
    }

}