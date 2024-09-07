#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s[4];
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
    for(int i=1;i<n-1;i++){
        if(s[0][i-1]=='C'&&s[0][i+1]=='C'){
            s[3][i]='C';
        }
    }
    for(int i=1;i<=n-1;i++){
        if(s[3][i-1]=='C'&&s[3][i+1]=='C'){
            s[2][i]='R';
        }
    }
    for(int i=1;i<=n-1;i++){
        if(s[2][i-1]=='R'&&s[2][i+1]=='R'){
            s[1][i]='A';
        }
    }
    for(int i=1;i<=n-1;i++){
        if(s[1][i-1]=='A'&&s[1][i+1]=='A'){
            s[0][i]='H';
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[0][i]=='H')
            ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
