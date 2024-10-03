#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long num) {
    long long original = num;  
    long long reversed = 0;
    long long remainder;

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;            
        reversed = reversed * 10 + remainder; 
        num /= 10;             
    }

    return original == reversed;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    long long a, count = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a;
        if(isPalindrome(a))
        {
            cout << "Happy" <<endl;
            count = 0;
        }
        else 
        {
            count++;
            if (count >= k)
            cout << "Unhappy" << endl;

            else if (count < k)
            {
                cout << "Neutral" << endl;
                
            } 
        }

    }
}