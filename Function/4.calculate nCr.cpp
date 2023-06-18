#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=2;i<=a;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int n,r,ans;
    cin>>n>>r;
    ans=(fact(n))/(fact(r)*fact(n-r));
    cout<<ans<<"\n";
}
