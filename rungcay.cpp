#include <bits/stdc++.h>
using namespace std;
long long n,a,b,maxa,maxb;
double suma, sumb;
int main() {
    freopen("rungcay.inp","r",stdin);
    freopen("rungcay.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        maxa=max(maxa,a);
        maxb=max(maxb,b);
        suma+=a;sumb+=b;
    }

    cout << maxa << " " << maxb << " ";
    cout << fixed << setprecision(2)  <<  suma/n << " " << sumb/n;
    
    return 0;
}