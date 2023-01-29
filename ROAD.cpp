#include <bits/stdc++.h>
using namespace std;
long n,dem,maxdem,vt=1,maxvt;
string a,b;
char color,maxcolor;
int main() {
    freopen("ROAD.inp","r",stdin);
    freopen("ROAD.out","w",stdout);
    cin >> n;
    cin >> a >> b;
    if(a[0]==b[0]) color=a[0];
    for(size_t i=0;i<n;i++){
        if(a[i-1]!=b[i-1]&&a[i]==b[i]){
            dem++;vt=i+1;color=a[i];
        }else if(a[i]==b[i]){
            dem++;
            if(maxdem<dem){
                maxdem=dem;maxvt=vt;maxcolor=color;
            }  
        }else{
            dem=0;vt=0;color=' ';
        }
    }
    
    if(maxdem==0) cout << 0;
    else cout << maxdem <<"\n"<< maxvt << maxcolor;
    return 0;
}
/*
16
xxxxvvvvdddddddd
dddxxxxxxxxddddd
*/