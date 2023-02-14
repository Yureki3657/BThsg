#include <bits/stdc++.h>
using namespace std;
const long maxN=1e6+5;
long a[maxN],b[maxN],ans,x,n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n ;
    for(int i=1;i<=n;++i) cin >> a[i];
    for(int i=1;i<=n;++i){
        cin >> x;b[x]++;
    }
    for(int i=1;i<=n;++i)
        ans+=b[a[i]];
    
    cout << ans;
    
    return 0;
}
/*
8
7 4 2 8 6 4 2 4
3 7 2 1 2 7 1 4
*/
    