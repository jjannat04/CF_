#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
 bool isPrime(int num) {
    if (num < 2) return false;  
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false;
    }
    return true;
}
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>prime;
    
    for (int i = 0; ; i++)
    {
        if(isPrime(i))
        prime.push_back(i);

        if (prime.size() >= (n*m))
        break;
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << prime[num] << " ";
            num++;
        }
        
        cout << endl;
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