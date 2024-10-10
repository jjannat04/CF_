#include <bits/stdc++.h>
using namespace std;

int main(){
    string k;
    cin >> k;  // Read large number as string
    
    int modsfor2[4] = {1,2,3,4};
    int modsfor3[4] = {1,2,3,4};
    int modsfor4[2] = {1,4};

    // Compute k % 4 and k % 2
    int mod4 = 0, mod2 = 0;
    for (char c : k) {
        mod4 = (mod4 * 10 + (c - '0')) % 4;
        mod2 = (mod2 * 10 + (c - '0')) % 2;
    }

    // Get the values from the cycles
    int result = (1 + modsfor2[mod4] + modsfor3[mod4] + modsfor4[mod2]) % 5;
    
    cout << result << endl;
    return 0;
}