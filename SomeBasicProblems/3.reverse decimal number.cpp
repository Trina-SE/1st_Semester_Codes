#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,r=0,d=0;
    cin>>n;
    cout<<"Reverse number is:";
    for(i=1;n!=0;i=i*10){
        r=n%10;
        cout<<r;
        n=n/10;
    }



return 0;
}

