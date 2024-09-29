// // // #include <iostream>
// // // #include <math.h>
// // // using namespace std;

// // // int main()
// // // {
// // //     int t;
// // //     cin >> t;
// // //     long long n, k;
// // //     for (int i = 0; i < t; i++)
// // //     {
// // //         int opt = 0;
// // //         cin >> n >> k;
// // //         long long arr[20];
// // //         for (int i = 0; i < 20; i++)
// // //         {
// // //             arr[i] = pow(k, i);
// // //         }
// // //         while (n > 0)
// // //         {
// // //             for (int i = 19; ; i++)
// // //             {
// // //                 if (arr[i] < n)
// // //                 {       
// // //                     n = n - arr[i];
// // //                     opt++;
// // //                     continue;
// // //                 }
// // //             }
// // //         }
// // //         cout << opt <<endl;
// // //     }
// // // }

// // #include <iostream>
// // using namespace std;

// // // Function to calculate the minimum number of operations
// // int min_operations(long long n, long long k) {
// //     int operations = 0;

// //     // We use greedy approach to subtract largest powers of k
// //     while (n > 0) {
// //         long long currentPower = 1;
// //         // Find the largest power of k that is <= n
// //         while (currentPower * k <= n) {
// //             currentPower *= k;
// //         }
// //         // Subtract the largest power of k from n
// //         n -= currentPower;
// //         // Increment the number of operations
// //         operations++;
// //     }

// //     return operations;
// // }

// // int main() {
// //     int t;
// //     cin >> t;  // number of test cases
// //     while (t--) {
// //         long long n, k;
// //         cin >> n >> k;

// //         // Output the minimum number of operations
// //         cout << min_operations(n, k) << endl;
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;


// int min_operations(long long n, long long k) {
//     int operations = 0;


//     if (k == 1) {
//         return n; 
//     }


//     while (n > 0) {
//         long long currentPower = 1;

//         while (currentPower * k <= n) {
//             currentPower *= k;
//         }

//         n -= currentPower;

//         operations++;
//     }

//     return operations;
// }

// int main() {
//     int t;
//     cin >> t;  
//     while (t--) {
//         long long n, k;
//         cin >> n >> k;

//         cout << min_operations(n, k) << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int min_operations(long long n, long long k) {
    if (k == 1) return n;
    int operations = 0;
    while (n > 0) {
        long long currentPower = 1;
        while (currentPower * k <= n) {
            currentPower *= k;
        }
        n -= currentPower;
        operations++;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << min_operations(n, k) << endl;
    }
    return 0;
}
