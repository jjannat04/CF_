// #include <bits/stdc++.h>
// using namespace std;

// long long fibo(int n) {
//     if (n == 1) return 0;  
//     if (n == 2) return 1;  
//     long long a = 0, b = 1, c;
//     for (int i = 3; i <= n; i++) {
//         c = a + b;
        
//             if (c >= 2024)
//             {
//                 b = 2024;
//                 break;
//             }
        
//         a = b;
//         b = c;
//     }
//     return b;  
// }


// bool isLeap(int year) {
//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
//             if (year % 400 == 0) {
//                 return true;
//             }
//             return false;
//         }
//         return true;
//     }
//     return false;
// }

// int main() {
//     int n;
//     char ch;
//     cin >> n >> ch;
    
//     int year = 2024;
//     long long fib = fibo(n);
//     //cout << fib << endl;
//     if (ch == 'P')
//         year -= fib;
//     else 
//         year += fib;

    
        
//     //cout << year << endl;
//     if (isLeap(year))
//         cout << "Yes"; 
//     else 
//         cout << "No"; 
// }


#include <bits/stdc++.h>
using namespace std;

long long fibo(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    long long a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

bool isLeap(long long year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int main() {
    int n;
    char ch;
    cin >> n >> ch;
    
    long long year = 2024;
    if (n >= 19 && ch == 'P')
    {
        cout << "No";
        return 0;
    }
    long long fib = fibo(n);
    
    if (ch == 'P') 
    {
        
        year -= fib;
    } 
    else if (ch == 'F')
    {
        year += fib;
    }
    
    if (isLeap(year))
        cout << "Yes"; 
    else 
        cout << "No"; 
}
