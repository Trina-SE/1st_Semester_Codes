#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=2,f=0;
    cin>>n;
    while(i<=sqrt(n)){
        if(n%i==0){
           f=1;
           break;
        }
        else{
           i++;
        }
    }
    if(f==1) cout<<"NOT PRIME"<<"\n";
    else cout<<"PRIME"<<"\n";

    return 0;
}

