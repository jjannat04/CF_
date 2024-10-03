#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int k, h;
        cin >> k >> h; 

        while (true) {
            h -= k;

            if (h <= 0) {  
                cout << "Kryptx" << endl;
                break;
            }

            k -= h; 

            if (k <= 0) { 
                cout << "Humans" << endl;
                break;
            }
        }
    }

    return 0;
}