#include<bits/stdc++.h>
using namespace std;
int fact(int a){
   int f=1;
   for(int i=2;i<=a;i++){
      f=f*i;
   }
   return f;
}
int nCr(int x, int y){
    int ans;
    ans=(fact(x))/((fact(y))*fact(x-y));
    return ans;
}
int main(){
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            k=nCr(i,j);
            cout<<k<<" ";
        }
        cout<<"\n";
    }
return 0;
}
