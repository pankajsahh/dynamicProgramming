#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &dp,int arr[],int n){
    if(n==0) return 0;
    int &one = dp[n];
    if(one!= -1) return one;
    one = abs(arr[n]-arr[n-1])+ solve(dp,arr,n-1);
    if(n-2>=0)
     one =min(one, abs(arr[n]-arr[n-2]) +solve(dp,arr,n-2));
    return one;
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<int> dp(n,-1);//minimum cost to that postion
    cout<<solve(dp,arr,n-1);
 
}