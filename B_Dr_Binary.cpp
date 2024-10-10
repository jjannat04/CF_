#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(string s)
{
    bitset<64> bits(s);
    int dec = bits.to_ulong();
    return dec;
}
int main()
{
    string s;
    cin >> s;
    int dec = binaryToDecimal(s);
    if (dec % 2 == 0)
    cout << "YES";
    else 
    cout << "NO";
}