#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        ch = tolower(ch);
        cout << ch;
    }
    else if (ch >= 97 && ch <= 122)
    {
        ch = toupper(ch);
        cout << ch;
    }
}