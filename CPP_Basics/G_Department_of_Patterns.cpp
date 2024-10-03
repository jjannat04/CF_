#include <bits/stdc++.h>
using namespace std;

void patternA(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patternB(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patternC(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            cout << "*";
            else 
            cout << " ";
        }
        cout << endl;
    }
}
void patternD(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


int main(){
    char ch;
    int n;
    cin >> ch >> n;
    if (ch == 'A')
    {
        patternA(n);
    }
    else if (ch == 'B')
    {
        patternB(n);
    }
    else if (ch == 'C')
    {
        patternC(n);
    }
    else if (ch == 'D')
    {
        patternD(n);
    }


}