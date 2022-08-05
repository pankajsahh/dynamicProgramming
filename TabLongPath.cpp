#include<bits/stdc++.h>
using namespace std;
#define int  long long int
int mod = 1e9+7;

int32_t main(){
    int a,b;
    cin>>a>>b;
    vector<string>ar;
    vector<vector<int>>dp(a,vector<int>(b,1));
    for(int i=0; i<a;i++){
        
            string x;cin>>x;
            ar.push_back(x);
        
    }
    for(int i=0;i<a; i++){
        for(int j=0; j<b;j++){
            if(i==0 and j==0) dp[i][j] = 1;
            else if(i==0) dp[i][j] = dp[i][j-1];
            else if(j==0) dp[i][j] = dp[i-1][j];
            else{
                dp[i][j] = dp[i][j-1]+dp[i-1][j];
            }
            if(ar[i][j]=='#') dp[i][j]=0;
            dp[i][j]%= mod;
        }
    }
   cout<<dp[a-1][b-1];

return 0;
}