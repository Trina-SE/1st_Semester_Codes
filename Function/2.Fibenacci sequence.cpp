#include<bits/stdc++.h>
using namespace std;
void is_fibenacci (int p){
    int a=0,b=1,c;
    for(int i=1;i<=p;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int main(){
    int n;
    cin>>n;//n ta fibenacci number print koro
    if(n==1) cout<<0<<" ";
    else if(n==2) cout<<0<<" "<<1<<" ";
    else{
        cout<<0<<" "<<1<<" ";
        is_fibenacci(n-2);
    }
}
