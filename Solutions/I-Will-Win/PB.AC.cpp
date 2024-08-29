#include<bits/stdc++.h>
using namespace std;
#define int long long
const int p=(int)1e9+7;
signed main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    function<int(int,int)> re=[&](int x,int y)->int {
        //cerr<<x<<" "<<y<<'\n';
        if(dp[x][y]!=-1)
            return dp[x][y];
        if(x<y||y==0){
            dp[x][y]=0;
            return 0;
        }
        if(x==y){
            dp[x][y]=1;
            return dp[x][y];
        }
        dp[x][y]=re(x-1,y-1);
        dp[x][y]+=(x-1)*re(x-1,y);
        dp[x][y]%=p;
        return dp[x][y];
    };
    cout<<re(n,k)<<'\n';
}