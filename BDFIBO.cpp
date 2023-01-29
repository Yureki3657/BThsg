#include <bits/stdc++.h>
using namespace std;
long long k,i,s,f[93],x[100],j;
int main(){
    freopen("BDFIBO.inp","r",stdin);
    freopen("BDFIBO.out","w",stdout);
    cin>>s;
    f[0]=0; f[1]=1; k=2;
    while(f[k-1]<=s) {f[k]=f[k-2]+f[k-1];k++;}
    k--; i=0;
    //for(long long x : f) cout << x << endl;
    //cout<<k<<endl;
    while(s>0){
        i++;
        while(f[k]>s) k--;
        x[i]=k; s-=f[k];
    }
    cout << i << endl;
    for(j=i;j>=1;j--)
        cout << x[j] << " ";
}