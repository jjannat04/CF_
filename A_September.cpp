#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 12; i++)
    {
        string s;
        cin >> s;
        int sz = s.size();
        if (sz == i)
        count++;
    }
    cout << count;
}