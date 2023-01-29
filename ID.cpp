#include <bits/stdc++.h>
using namespace std;
long n,x;
long kt(long n){
    long s;
    s=(n/100000*5)+(n%100000/10000*11)+(n%10000/1000*7)+(n%1000/100*23)+(n%100/10*3)+(n%10*17);
    s%=13;
    return s;
}   
int main() {
    freopen("ID.inp","r",stdin);
    freopen("ID.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> x;
        cout << char(kt(x)+65) << "\n"; 
    } 
    
    return 0;
}