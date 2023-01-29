#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll so=1,a[5000000],carry,r;
ll giaithua(ll n){
    so=1,a[5000000]={},carry=0,r=0;a[0]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<so;j++){
            r=(i*a[j]+carry)%10;
            carry=(i*a[j]+carry)/10;
            a[j]=r;   
        }
        //cout << r << " " <<carry << endl;
        while(carry!=0){
            a[so]=carry%10;so++;
            carry/=10;
            //cout << r << " " <<carry << endl;
        }
        //cout << endl;
    }
    ll sum=0;
    for(int i=so-1;i>=0;i--)
        sum+=a[i];
    return sum;
}

int main(){
    freopen("giaithua.inp","r",stdin);
    freopen("giaithua.out","w",stdout);
    ll n;
    while(cin >> n)
        cout << giaithua(n) << "\n"; 
    return 0;
} 
