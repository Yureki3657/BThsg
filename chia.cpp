#include <bits/stdc++.h>
using namespace std;
long ans,n,x;
bool kt(string s){
    long so=0,sochia=0;
    for(int i=0;i<s.size();i++){
        so=(so*10)+(s[i]-'0');
        sochia=s[i]-'0';
        //cout << so << " " <<sochia << endl; 
        if(sochia==0) return 0;
        if(so%sochia!=0) return 0;
    }
    return 1;
}
int main() {
    freopen("chia.inp","r",stdin);
    freopen("chia.out","w",stdout);
    cin >> n;
    
    for(int i=11;i<=n;i++)
        if(kt(to_string(i))) ans++;
       
    cout << ans;
    return 0;
}