#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int perimetre;
	    cin >> perimetre;
	    
	    int aplusb = perimetre/2;
	    int a = 1;
	    int b = aplusb - a;
	    int maxarea = 0;
	    for (int i = a; i <= aplusb;i++){
	        
	        int area = i*b;
	        b--;
	        if (area > maxarea)
	        maxarea = area;
	        
	    }
	    cout << maxarea << endl;
	    
	    
	}

}
