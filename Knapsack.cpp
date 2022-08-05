#include<bits/stdc++.h>
using namespace std;
int solve(vector<pair<int,int>>ks,int w,int n,vector<vector<int>>dp){
    if(n<0) return 0;
    int &ans = dp[n][w];
    if(ans != -1 ) return ans;
    //do not take item
     ans = solve(ks,w,n-1,dp);
    if(ks[n].first<=w)//take the item
    ans = max(ans,ks[n].second+solve(ks,w-ks[n].first,n-1,dp));
    return ans;
}
 
int main(){
    int n,w;
    cin>>n>>w;
    vector<pair<int,int>>ks;
    for(int i=0; i<n; i++){
        pair<int,int>p;
        cin>>p.first>>p.second;
        ks.push_back(p);
    }
    vector<vector<int>>dp(100,vector<int>(100001,-1));
    cout<<solve(ks,w,n-1,dp);
 
    return 0;
 
}