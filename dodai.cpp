#include <bits/stdc++.h>
using namespace std;
long n,nowsize,aftersize,dem,maxdem[10000];
string s,tmp;
int main() {
    freopen("dodai.inp","r",stdin);
    freopen("dodai.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;cin.ignore();
    for(int i=0;i<n;i++){
        aftersize=0;nowsize=0;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> tmp){
            nowsize=tmp.size();
            if(aftersize==nowsize) dem++;
            else dem=1;
            maxdem[i]=max(dem,maxdem[i]);
            aftersize=nowsize;
        }
    }
    for(int i=0;i<n;i++) cout << maxdem[i] << "\n";
    
    return 0;
}