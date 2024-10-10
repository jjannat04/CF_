#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 
void solve(){
    ll n, k;
    cin >> n >> k;

    ll sumT = (n*(n+1))/2;
    ll sumF = ((n-k+1)*(n-k))/2;
    
    ll sum = sumT - sumF; 

    if (sum % 2 == 0)
    cout << "YES" << endl;
    else cout << "NO" << endl;
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