#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    long long result = 1;

    
    for (int i = a; i > b; i--) {
        result *= i;
    }

    cout << result << endl;
    return 0;
}
