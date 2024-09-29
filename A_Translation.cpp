#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, revb;
    cin >> a >> b;
    reverse(b.begin(), b.end());


    int flag = a.compare(b);

    if (flag == 0)
    cout << "YES";
    else 
    cout << "NO";
}