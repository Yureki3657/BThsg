#include <bits/stdc++.h>
using namespace std;
long n,x,min1=LONG_MAX,min2=LONG_MAX;
int main(){
    freopen("MIN.inp","r",stdin);
    freopen("MIN.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(min1>x){min1=min2;min1=x;}
        else if(min2>x) min2=x;
    }
    cout << min1*min2;
    return 0;
}
    