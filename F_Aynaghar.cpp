#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) count++;
        if (count < n) num++;
    }
    return num;
}

int main() {
    int n;
    cin >> n;
    cout << nthPrime(n) << endl;
}
