// Sept 30, 2024
// time needed: 12 min 

#include <iostream>

using namespace std;

int main()
{
    int countone = 0, countzero = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '1')
        {
            countone++;
            if (countone == 7)
            break;
        }

        else 
        countone = 0;
        
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '0')
        {
            countzero++;
            if (countzero == 7)
            break;
        }
        else 
        countzero = 0;
        
    }
    if (countone >= 7 || countzero >= 7)
    cout << "YES";

    else 
    cout << "NO";


}