#include <bits/stdc++.h>
using namespace std;
long n,k,x[51],y[51],ans=0,dem=0;
int main(){ 
    freopen("HCN.inp","r",stdin);
    freopen("HCN.out","w",stdout);
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin >> x[i] >> y[i];
    
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(ans<abs((y[i]-y[j])*(x[j]-x[i]))){
                dem=0;
                for(int t=0;t<n;t++)
                    if(y[i]>=y[t]&&x[t]<=x[j])
                    dem++;
            if(dem>=k) ans=abs((y[i]-y[j])*(x[j]-x[i]));
            }
    cout << ans;
    return 0;
}