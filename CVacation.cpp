#include<bits/stdc++.h>
using namespace std;

int main(){
        
    int n;cin>>n;
    int V[n][3];

    for(int i=0; i<n; i++){
        for(int j=0;j<3;j++){
            cin>>V[i][j];
        }
    }

    for(int i=1; i<n; i++){
        for(int j=0;j<3;j++){
            V[i][j] += max(V[i-1][abs((j+2)%3)],V[i-1][abs((j+1)%3)]); 
        }
    }
    int res = INT_MIN;

    for(int i=0; i<3; i++){
        res = max(res,V[n-1][i]);
    }
    cout<<res<<endl;


    return 0;
}
