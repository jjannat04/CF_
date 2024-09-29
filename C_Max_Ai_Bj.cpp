#include <iostream>
#include <limits>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n], b[n];
    
    long long max_a = INT64_MIN;  
    long long max_b = INT64_MIN;  
    

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_a)
            max_a = a[i];
    }
    
    for (long long i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > max_b)
            max_b = b[i];
    }

    cout << (max_a + max_b) << endl;

    return 0;
}
