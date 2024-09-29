#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int last = x / 1000;
    
    if (last % 2 == 0)
    cout << "EVEN";
    else if (last % 2 == 1)
    cout << "ODD";
}