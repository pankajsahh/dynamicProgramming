#include <bits/stdc++.h>
using namespace std;

// frog 10 30 40 50 20
// take 1--> k jumps  dp choices are k

// if he jumps at ith stone he will he will take cost of jump  ==> abs(arr[i]-arr[i-k])
// / dp part is not working????


int main() 
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<int>dp(n,100001);
    dp[0] = 0;
    dp[1] =abs(arr[0]-arr[1]);
    for(int i=2; i<n; i++){
        for(int j=1; j<=k;j++){
            if(i-j>=0)
            dp[i] = min(dp[i],abs(arr[i]-arr[i-j])+dp[i-j]);
        }
       
    }
    cout<<dp[n-1];
    return 0;
}