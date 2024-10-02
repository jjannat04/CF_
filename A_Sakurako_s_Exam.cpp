// 18 minutes
// Oct 3, 2023

#include<iostream>
using namespace std;
 
int main(){
 
int t;
cin>>t;
 
while(t--){
    int a,b;
    cin>>a>>b;
    int sum=a+2*b;
 
    if(sum%2!=0){
        cout<< "NO"<<endl;
    }else{
        int half=sum/2;
        if(half%2==0 ||(half%2!=0 && a>0)){
            cout<< "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }
    }
}
 
return 0;
}
