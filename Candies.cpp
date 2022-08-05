#include<bits/stdc++.h>
using namespace std;
#define int long long int
int solve(vector<int>a,int n, int k){
    if(n<0){
        return k==0?1:0;
    }
    int ans =0;
    for(int i=0; i<=a[n]; i++){
       ans += solve(a,n-1,k-i);
    }
    return ans;
}
int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;cin>>x;
        a.push_back(x);
    }
    cout<<solve(a,n-1,k);
    return 0;
}