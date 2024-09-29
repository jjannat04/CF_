#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int main() {
    string S;
    cin >> S;
    int pos[26];
    for (int i = 0; i < 26; i++) {
        pos[S[i] - 'A'] = i;  
    }
    
    int total_distance = 0;
    for (char ch = 'A'; ch < 'Z'; ch++) {

        total_distance += abs(pos[ch - 'A'] - pos[ch + 1 - 'A']);
    }
    
    cout << total_distance << endl;
    
    return 0;
}
