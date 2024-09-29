#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (x == 0)
    {
        if (y == 0)
        cout << "Origem";
        else
        cout << "Eixo Y";
    }
    else if (y == 0)
    {
        if (x == 0)
        cout << "Origem";
        else
        cout << "Eixo X";
    }
    else 
    {
        if (x > 0)
        {
            if (y > 0)
            cout << "Q1";
            else 
            cout << "Q4";
        }
        else if (x < 0)
        {
            if (y > 0)
            cout << "Q2";
            else 
            cout << "Q3";
        }
    }
}
