#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string name;
    cin >> name;

    set<char> unique_chars; // Set is a STL: to store unique characters

    for (char ch : name) {
        unique_chars.insert(ch); // Add each character to the set
    }

    int len = unique_chars.size(); // Get the size of the set (unique character count)
    
    if (len % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
