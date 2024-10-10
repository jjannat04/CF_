#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dec;
    int base;
    cin >> dec >> base;

    int answer = 0;
    int power = 1;
    while (dec != 0){
        int temp = dec;
        dec = dec / base;
        int rem = temp % base;
        answer += (rem*power);
        power *= 10;
    }
    cout << answer << endl;
}