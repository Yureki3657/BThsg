#include <bits/stdc++.h>
using namespace std;
long n,a,b,loop,sobus,sotaxi,fee=LONG_MAX;
const int bus=50,taxi=4;
int main() {
    freopen("TRANS.inp","r",stdin);
    freopen("TRANS.out","w",stdout);
    cin >> n >> a >> b;
    loop=max(n/bus+1,n/taxi+1);
    for(int i=0;i<=loop;i++)
        for(int j=0;j<=loop;j++)
            if(i*bus+j*taxi>=n && a*i+b*j<fee){
              fee=a*i+b*j;
              sobus=i,sotaxi=j;
            }
       
    cout << sobus << " " << sotaxi;
    
    return 0;
}
  