#include <bits/stdc++.h>
using namespace std;
bool ktsnt(long long n){
    if (n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) 
        if (n%i==0) return 0 ;
    return 1;
}

long long kt(long long n){
    long long kq=0;
    if(ktsnt(n)) kq=n;
    else{
       set<long long> s;
       long i=2;
       while(n!=1){
            if(n%i==0) {s.insert(i);n/=i;}
            else i++;
       }
       for(long long x : s) kq+=x;
    }
    return kq;
}
int main(){
    freopen("nguyento.inp","r",stdin);
    freopen("nguyento.out","w",stdout);
    long long n;
    cin>>n;
    cout << kt(n);
    return 0;
}