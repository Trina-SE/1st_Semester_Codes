#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,r=0,reverse=0;;
    cin>>n;
    while(n!=0){
       r=n%10;
       reverse=(reverse*10)+r;
       n=n/10;
       //n=4512 then reverse->2,21,215,2154->ultimately 2154
    }
    cout<<reverse<<"\n";
    return 0;
}
