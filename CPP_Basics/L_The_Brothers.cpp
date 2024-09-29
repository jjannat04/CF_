#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;

    int flag = s1.compare(s2);
    if (flag == 0)
    cout << "ARE Brothers";
    else 
    cout << "NOT";
}