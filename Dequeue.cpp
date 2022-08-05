#include<bits/stdc++.h>
using namespace std;
#define int long long int
/// tabulation 


// int main(){


// }
const int N = 3001;
int memo[N][N][2];

/// recursion 
int solve(vector<int>a,int i,int j,int turn){
    if(i>j) return 0;
    int &ans = memo[i][j][turn];
    if(ans!=1e18) return ans;
    if(turn){//jiro
        ans = min(solve(a,i+1,j,1-turn) -a[i] , solve(a,i,j-1,1-turn)-a[j]);
        
    }else{ //taro
        ans = max(a[i]+ solve(a,i+1,j,1-turn), a[j]+ solve(a,i,j-1,1-turn)); 
    }
    return ans;
    
}

int32_t main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0 ;i<n; i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<N; i++){
        for(int j = 0; j<N; j++){
            memo[i][j][0]=memo[i][j][1]= 1e18;
        }
    }
    cout<<solve(a,0,n-1,0);
    return 0;
}