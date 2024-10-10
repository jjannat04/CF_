#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    if (N == 1) 
        cout << "N";
    else if (N % 2 == 0) 
        cout << "Y";
    else 
        cout << "N";
    return 0;
}
