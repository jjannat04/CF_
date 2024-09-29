#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    for(int i=0;i<str1.length();i++){
    str1[i]= tolower(str1[i]);
}

for(int i=0;i<str2.length();i++){
    str2[i]= tolower(str2[i]);
}
    int len = str1.length();
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] < str2[i])
        {
            flag = -1;
            break;
        }
        else if (str1[i] > str2[i])
        {
            flag = 1;
            break;
        }
    }
    cout << flag;

}
