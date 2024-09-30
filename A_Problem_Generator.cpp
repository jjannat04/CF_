//Sept 30, 2024
// Time needed: 15 min? 
// comment: i dont like how long it became.. wht is a shorter way? 
#include <iostream>

using namespace std;

int main()
{
    
    int t;
    cin >> t;
    int n, m;
    string s;
    while (t--)
    {
        int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0, countF = 0, countG = 0;
    
        cin >> n >> m;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == 'A')
            {
                if (countA < m)
                countA++;                
            }    
            else if(s.at(i) == 'B')
            {
                if (countB < m)
                countB++;                
            }  
            else if(s.at(i) == 'C')
            {
                if (countC < m)
                countC++;                
            }  
            else if(s.at(i) == 'D')
            {
                if (countD < m)
                countD++;                
            }  
            else if(s.at(i) == 'E')
            {
                if (countE < m)
                countE++;                
            }  
            else if(s.at(i) == 'F')
            {
                if (countF < m)
                countF++;                
            }  
            else if(s.at(i) == 'G')
            {
                if (countG < m)
                countG++;                
            }  

        }
        // cout << countA << endl;
        // cout << countB << endl;
        // cout << countC << endl;
        // cout << countD << endl;
        // cout << countE << endl;
        // cout << countF << endl;
        // cout << countG << endl;
        cout << ((m-countA)+(m-countB)+(m-countC)+(m-countD)+(m-countE)+(m-countF)+(m-countG)) <<endl;
    }
}