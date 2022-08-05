// 9 test cases failed dont know why tabulation is perfect
// in recursive approack half of the test case failed 
// completely stressed out?????????????????

#include<bits/stdc++.h>
using namespace std;

//recursive approach
// bool Taro(vector<int>m,int n, int k,vector<int>dp){
//     if(k == 0) return false;
//     if(dp[k] != -1) return dp[k];

//     for(int i=0; i<n; i++){
//         if(k-m[i]>=0){
//             if(Taro(m,n,k-m[i],dp)==false){
//                 return dp[k] = true;
//             }
//         }
//     }
//     return dp[k]= false;
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>moves;
//     vector<int >dp(k,-1);
//     for(int i=0; i<n; i++){
//         int x; cin>>x;
//         moves.push_back(x);
//     }
//     if(Taro(moves,n,k,dp)){
//         cout<<"First";
//     }else{
//         cout<<"Second";
//     }
//     cout<<endl;

    

// }
// top down --> tabulation approach
int main(){
  int n,k;
    cin>>n>>k;
    vector<int>moves;

    vector<int>dp(k+1,0);

    for(int i=0; i<n; i++){
        int x; cin>>x;
        moves.push_back(x);
    }
    
    for(int i=1; i<=k; i++){

        for(int j=0; j<n;j++){
            if(i-moves[j]>=0 && dp[i-moves[j]] == 0) dp[i] = 1;
            break;
        }
    }
    cout<<(dp[k]?"First" : "Second");


}
