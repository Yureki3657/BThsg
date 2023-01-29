#include <bits/stdc++.h>
using namespace std;
long n,x,y,max1,max2,vt1,vt2,t,a,b;
int main() {
    freopen("fetsival.inp","r",stdin);
    freopen("fetsival.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> x >> y >> n;
    for(int i=0;i<n;++i){
        cin >> a >> b;
        t=(a*x)+(b*y);
        if(max1<t){max2=max1;max1=t;vt1=i+1;}
        else if(max2<t) {max2=t;vt2=i+1;}
    }
    if(vt1>vt2) cout << vt2 << " " << vt1;
    else cout << vt1 << " " << vt2;
    return 0; 
}