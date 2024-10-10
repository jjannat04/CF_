// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
// #define vi vector<int>
 
// int dectoanybase(int dec, int base){
    

//     int answer = 0;
//     int power = 1;
//     while (dec != 0){
//         int temp = dec;
//         dec = dec / base;
//         int rem = temp % base;
//         answer += (rem*power);
//         power *= 10;
//     }
//     return answer;
// }
 
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         int answer = dectoanybase(n, k);
//         int sum = 0;
//         while (answer != 0){
//             sum += answer % 10;
//             answer = answer / 10;
//         }
//         cout << sum << endl;
//         //cout << answer << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

int sumDigitsInBase(ll dec, int base) {
    if (base == 1) return dec;
    int sum = 0;
    
    while (dec) {
        int rem = dec % base; 
        sum += rem;           
        dec /= base;          
    }
    
    return sum;
}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        int k;
        cin >> n >> k;
        
        int sum = sumDigitsInBase(n, k);
        cout << sum << endl;
    }
}
