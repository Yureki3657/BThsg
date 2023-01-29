#include <bits/stdc++.h>
using namespace std;
long long n,dem=0;

bool kt(long n){
    if(sqrt(n)==trunc(sqrt(n))) return 1;
    return 0;
}

int main() {
    freopen("phantich.inp","r",stdin);
    freopen("phantich.out","w",stdout);
    cin >> n;
    for(size_t i=1;i<sqrt(n);++i)
        for(size_t j=i;j<sqrt(n);++j)
            if(n-i*i-j*j>0){
                if(kt(n-i*i-j*j)&&trunc(sqrt(n-i*i-j*j))>j){ 
                cout << i << " " << j << " " << sqrt(n-i*i-j*j) << "\n";
                dem++;break;
                }
            }
        
    cout << dem;
    return 0;
}