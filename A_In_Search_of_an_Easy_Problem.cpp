#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    cout << "EASY";
    else 
    cout << "HARD";
}