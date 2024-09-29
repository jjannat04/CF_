#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char current = s.at(0);
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (current == s.at(i))
        {
            count++;
        }
        current = s.at(i);
    }
    cout<< count;
}