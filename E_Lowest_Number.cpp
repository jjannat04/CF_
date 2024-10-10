#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int low = INT_MAX;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < low){
        low = arr[i];
        pos = i;
        }
    }
    cout << low << " " << pos+1;

}