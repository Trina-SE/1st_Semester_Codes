#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,r=0;
    cin>>n;
    vector<int>v;
    for(i=0;n!=0;i++){
        r=n%2;
        v.push_back(r);
        n=n/2;
    }
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}
