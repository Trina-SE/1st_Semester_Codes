#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    cin>>n;
    for(i=0;n!=0;i++){
        sum=sum+(n%10);
        n=n/10;
    }

    cout<<sum<<"\n";
    return 0;

}
