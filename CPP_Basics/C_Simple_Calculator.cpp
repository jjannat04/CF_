#include <iostream>

using namespace std;

int main()  
{
    long long x, y;
    do {
         cin >> x >> y;
    } while (x <= 1 || y <= 1 || x >= 100000 || y >= 100000);
   
    
    cout << x << " + " << y << " = " << (x+y) << endl;
    cout << x << " * " << y << " = " << (x*y) << endl;
    cout << x << " - " << y << " = " << (x-y) << endl;
}