#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    if (s.compare(t) == 0)
    {
        cout << "0" << endl;
    }
    else if (s.size() != t.size())
    {
        cout << "1" << endl;
    }
    else 
    {
        cout << "2" << endl;
    }
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}