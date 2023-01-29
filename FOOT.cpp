#include <bits/stdc++.h>
using namespace std;

int main() {
    long n,lgthuc=0,fee=0;
    cin >> n;
    long* a = new long[n];
    cin >> a[0] >> a[1];
    fee+=a[0]*2;
    if(a[1]>a[0]) fee+=a[0]*2;
    else fee+=a[1]*2;
    for(int i=2;i<n;i++) cin >> a[i];
    for(int i=2;i<n;i++){
        if(a[i-2]<a[i]&&a[i-2]<a[i-1]){
            fee+=a[i-2]*2;
        }else if(a[i-1]<a[i]&&a[i-1]<a[i-2]){
            fee+=a[i-1]*2;
        }else fee+=a[i];
    }
    cout << fee;
    delete[] a;       
    return 0;
}