#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d,x,y,m;
long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    freopen("cong.inp","r",stdin);
    freopen("cong.out","w",stdout);
    cin >> a >> b >> c >> d;
        x=a*d+b*c;y=b*d;
        m=gcd(x,y);
        x/=m;y/=m;
        cout << x << " " << y << endl;

        return 0;
}
    