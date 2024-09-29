#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char ch;
    int countA=0, countD=0;
    while (t--)
    {
        cin >> ch;
        if (ch == 'A')
        countA++;
        else if (ch == 'D')
        countD++;
    }
    if (countA > countD)
    cout << "Anton";
    else if (countA < countD)
    cout << "Danik";
    else 
    cout << "Friendship";
    // cout << countA << " " << countD;

    return 0;
}