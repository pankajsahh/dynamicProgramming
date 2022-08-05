#include<bits/stdc++.h>
using namespace std;
#define int  long long int

int solve(vector<string>a,int er,int ec,int row,int col, vector<vector<int>>dp){
    if(row==er and col == ec) return 1;
    if(row>er || col>ec || a[row][col]=='#') return 0;
    int &ans = dp[row][col];
    ans = solve(a,er,ec,row,col+1,dp)+solve(a,er,ec,row+1,col,dp);
    return ans % (long)(1e9+7);
}

int32_t main(){
    int a,b;
    cin>>a>>b;
    vector<string>ar;
    vector<vector<int>>dp(1001,vector<int>(1001,-1));
    for(int i=0; i<a;i++){
        
            string x;cin>>x;
            ar.push_back(x);
        
    }
    
   cout<<solve(ar,a-1,b-1,0,0,dp);

return 0;
}