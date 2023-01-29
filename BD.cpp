#include <bits/stdc++.h>
using namespace std;
long n,a[1000],f[1000],kq;
int main(){
  freopen("BD.inp","r",stdin);
    freopen("BD.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n-1;i++){
      for(int j=0;j<i;j++){
        if((a[i-1]<a[i]&&a[i]>a[i+1])||(a[i-1]>a[i]&&a[i]<a[i+1]))
          f[i]=f[i-1]+1;
      }
        kq=max(f[i],kq);
    }
    //for(int i=1;i<n-1;i++) cout << f[i]<< " ";
    cout << kq+2;
    return 0;
}