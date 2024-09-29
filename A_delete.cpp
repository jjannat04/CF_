#include <iostream> 
#include <string> 
using namespace std;
int main()
{
  string string;
  cin >> string;
  int len = string.size();
  for (int i = 0; i < len; i++)
  {
    if (string[i] != '.')
    {
      cout << string[i];
    }
  }
  return 0;
}