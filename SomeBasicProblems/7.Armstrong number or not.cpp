/*153 is armstrong number
cz (1)^3+(5)^3+(3)^3=153
digit er cube korle oi number pabo..*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,r=0,sum=0;
    cin>>n;
    int original_n=n;
    while(n!=0){
        r=n%10;
        sum=sum+pow(r,3);
        //cout<<sum<<"\t";
        n=n/10;
    }
    if(sum==original_n)cout<<"Armstrong"<<"\n";
    else cout<<"Not Armstrong"<<"\n";

    return 0;
}
