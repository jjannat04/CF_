// Sept 29, 2024
// time needed: 3 minute+ 
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (b - a >= 2)
        count++;
    }
    cout << count;
}