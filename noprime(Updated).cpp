#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll phi(ll n){
    ll res=n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            res-= res/i;
        }
    }
    if(n!=1){
      res -= res/n;
    }
    return res;
}

int main(){
    freopen("noprime.inp","r",stdin);
    freopen("noprime.out","w",stdout);
    ll n;
    cin >> n;
    cout << n-phi(n)-1;
    return 0;
} 

