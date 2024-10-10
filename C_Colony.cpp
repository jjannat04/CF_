#include <bits/stdc++.h>
using namespace std;

int main() {
    string k;
    cin >> k;  
    int mod4 = 0, mod2 = 0;
    for (char c : k) {
        mod4 = (mod4 * 10 + (c - '0')) % 4;  
        mod2 = (mod2 * 10 + (c - '0')) % 2;  
    }
    int term1 = 1;
    int term2 = (mod4 == 0) ? 1 : (mod4 == 1) ? 2 : (mod4 == 2) ? 4 : 3; 
    int term3 = (mod4 == 0) ? 1 : (mod4 == 1) ? 3 : (mod4 == 2) ? 4 : 2; 
    int term4 = (mod2 == 0) ? 1 : 4;

  
    int result = (term1 + term2 + term3 + term4) % 5;

 
    cout << result << endl;
    return 0;
}
