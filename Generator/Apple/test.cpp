// Author : ysh
// 2024/08/29 Thu 12:14:51
#include"testlib.h"
using namespace std;
int main(int ac,char* as[]) {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    registerGen(ac,as,1);

    int n = atoi(as[1]);
    long long R = atoll(as[2]);
    int k = atoi(as[3]) & 1;
    

    int m = rnd.next(0LL,R);
    cout<<m<<"\n";
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            if(k && rnd.next(0,100) == 1) cout<<m<<" \n"[j == n - 1];
            else cout<<rnd.next(0LL,R)<<" \n"[j == n - 1];
        }
    }

    return 0;
}