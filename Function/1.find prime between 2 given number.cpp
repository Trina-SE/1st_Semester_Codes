#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(is_prime(i)){
            cout<<i<<"\n";
            count++;
        }

    }
    cout<<"The total prime number:"<<count<<"\n";
    if(count==0) cout<<"No prime number found between this range\n";

}
