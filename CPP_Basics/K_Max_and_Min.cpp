#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int greatest = max({a, b, c});
    int lowest = min({a, b, c});
    cout << lowest << " " << greatest;
}