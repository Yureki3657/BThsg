#include <bits/stdc++.h>
using namespace std;
long a[3001],n,k,energy;

void xuly(){
    a[1]=1;a[2]=2;
    for(int i=3;i<=3000;i++){
        energy=LONG_MAX;
        for(int j=1;j<i;j++){
            if(j+1==i) energy=min(energy,a[j]+1);
            else if(j*2==i){
                if(j & 1) energy=min((j+1)/2+a[j],energy);
                else energy=min(j/2+a[j],energy);
            }
        }
        a[i]=energy;
    }
} 

int main() {
    freopen("trochoi.inp","r",stdin);
    freopen("trochoi.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    xuly();
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> k;
        cout << a[k] << "\n";
    }
    
    return 0;
}