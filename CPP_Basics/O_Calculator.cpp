#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> s;
    int len = s.size();
    size_t firstPos = s.find_first_of("+-*/");
    string sign = s.substr(firstPos,1);
    string sub1 = s.substr(0, (firstPos));
    string sub2 = s.substr((firstPos+1), (len-firstPos));
    // cout << firstPos <<endl;
    // cout << sub1 << endl;
    // cout << sub2;

    a = stoi(sub1);
    b = stoi(sub2);
    
    if (sign == "+")
    cout << (a+b);
    else if (sign == "-")
    cout << (a - b);
    else if (sign == "*")
    cout << (a * b);
    else if (sign == "/")
    cout << (a / b);


}