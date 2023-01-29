#include <bits/stdc++.h>
using namespace std;
long long n,j=1,kq,a;

bool kt(long long n){
    long dem=0,sum=0;
    while(n!=0){
        sum+=(n%10);n/=10;
        dem++;
    }
    if(sum%dem==0) return 1;
    return 0;
}
int main() {
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    cin >> n;
    for(;;){
        if(kt(j)) a++;
        if(n==a){
            cout << j;
            break; 
        }
        j++;
    }

    return 0;
}
    