#include<bits/stdc++.h>
using namespace std;
// we have person name raju 
// raju har roj 1 activity kr sakta hai 3 activity me se par raju jo activity kal kiya to aaj  
// repeat nhi krta 
// har activity ka happiness points hai 
// find algo to get maximum happiness

// we have N activities (let ==3)
    // 3 days
    //  day 1   // 10 40 70 
    // day 2    // 20 50 80
    // day 3    // 30 60 90
    // on day 1 he will do 70 point activity 
    // on day 2 he will do 50 point 
    // on day 3 he will do 90 point activity (210) ans;

/// pass by reference karo to 240 dera and pass by value pe sahi dera h logic???
//

int VacationHappyness(vector<int>&dp,vector<vector<int>>arr,int n,int pre){
    if(n<0) return 0;
    
    
    int &ans = dp[n];


    if(ans!=0) return ans;

    
    for(int i=0; i<3; i++){
        if(i!=pre){
            ans =max(ans, arr[n][i] + VacationHappyness(dp,arr,n-1,i));
        }
    }
    return ans;
}


int main(){
    int n;cin>>n;
    vector<int>dp(n,0);
    vector<vector<int>>arr;
    for(int i=0; i<n;i++){
        int x,y,z;cin>>x>>y>>z;
        arr.push_back({x,y,z});
    }
    cout<<VacationHappyness(dp,arr,n-1,3);
return 0;
}