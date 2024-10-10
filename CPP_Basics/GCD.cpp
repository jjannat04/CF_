#include <bits/stdc++.h>
using namespace std;

void gcd(int a, int b)
{
    if (a < b){
    int temp = a;
    a = b;
    b = temp;
    }
    int flag = 0;
    for (int i = b; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i <<endl;
            flag = 1;
            break;
        }
    }
    if (flag==0)
    cout << '1';
    
}
int main()
{
    int a, b;
    cin >> a >> b;
    gcd(a, b);
}