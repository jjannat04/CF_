#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int j = 0; j < t; j++)
    {    
        for (int i = 0; i < (n-1); i++)
        {
            if (s.at(i) == 'B' && s.at(i+1) == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;                      // if they are swaped, increase i by 1, cz within that second same boy wont swap with the next girl! 
            }
        }
    }
    cout << s;    
}