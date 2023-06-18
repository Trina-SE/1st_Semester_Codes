#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0,r=0;
    cin>>n;
    for(i=0;n!=0;i++){
        r=n%10;
        if(r==1){
            sum+=pow(2,i);
        }
        n=n/10;
    }
    cout<<sum<<"\n";
    return 0;
}
