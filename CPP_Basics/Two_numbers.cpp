#include <bits/stdc++.h>
using namespace std;
void f_floor(int a, int b)
{
    int result = (a/b);
    
    cout << "floor " << a << " / " << b << " = " << result << endl;
}
void f_ceil(int a, int b)

{
    float  result =((float)a/b);
    if (result != (int) result)
    cout << "ceil " << a << " / " << b << " = " <<(int) result + 1 << endl;

    else 
    cout << "ceil " << a << " / " << b << " = " <<(int) result << endl; 
}
void f_round(int a, int b)
{
    float result = ((float)a/b);
    float rem = result - (int) result;
    if (rem >= 0.5)
    cout << "round " << a << " / " << b << " = " <<(int)result+1 << endl;
    else 
    cout << "round " << a << " / " << b << " = " <<(int)result << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    f_floor(a, b);
    f_ceil(a, b);
    f_round(a, b);
}