#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>h;
    vector<int>a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        h.push_back(x);
        a.push_back(y);

    }
    int count = 0;
    for (int i = 0; i < n; i++) // host
    {
        for (int j = 0; j < n; j++) // away
        {
            if (i == j)
            continue;
            else if (h[i] == a[j])
                count++; 
            
        }
    }
    cout << count;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
    
//     vector<int>h={1,2,3};
//     vector<int>a={2,4,4};
    
//     int count = 0;
//     for (int i = 0; i < 3; i++) // host
//     {
//         for (int j = 0; j < 3; j++) // away
//         {
//             if (i == j)
//             continue;
//             else if (h[i] == a[j])
//                 count++; 
            
//         }
//     }
//     cout << count;
// }