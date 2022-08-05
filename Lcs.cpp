#include<bits/stdc++.h>
using namespace std;
string Lcs(string s1,string s2,int n,int m,vector<vector<string>>dp){
        if(n<0 || m<0) return "";
        if(dp[n][m]!="") return dp[n][m];
        if(s1[n]==s2[m]){
            return dp[n][m] = s1[n]+Lcs(s1,s2,n-1,m-1,dp);
        }
        string x = Lcs(s1,s2,n-1,m,dp);
        string y = Lcs(s1,s2,n,m-1,dp);
            return x.length()>y.length()? x:y;
    }

int main(){

string a,b;
cin>>a>>b;
vector<vector<string>>dp(a.size(),vector<string>(b.size(),""));
string ans = Lcs(a,b,a.size()-1,b.size()-1,dp);
reverse(ans.begin(),ans.end());
cout<<ans;
   return 0;
}