#include <bits/stdc++.h>
using namespace std;
long n,a[10000],f[10000],kq;

int main() {
    freopen("daycon.inp","r",stdin);
    freopen("daycon.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    f[0]=a[0];kq=f[0];
    for(int i=1;i<n;i++){
        f[i]=a[i];
        for(int j=0;j<i;j++)
            if(abs(a[i]-a[j])<=5) f[i]=max(f[i],f[j]+a[i]);
        //cout << f[i] << endl;
        kq=max(kq,f[i]);
    } 
    cout << kq;
    
    return 0;
}