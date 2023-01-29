#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    freopen("noprime.inp","r",stdin);
    freopen("noprime.out","w",stdout);
    static ll n,ans;
    cin >> n;
    for(ll i=2;i<n;i++){
        if(__gcd(n,i)>1) ans++;
    }    
    cout << ans;
    return 0;
} 

