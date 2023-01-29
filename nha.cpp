#include <bits/stdc++.h>
using namespace std;
long n,m,a[100][100],d,c,ans;

int main() {
    freopen("nha.inp","r",stdin);
    freopen("nha.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++)
            cin >> a[i][j];
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1&&a[i][j-1]==0&&a[i-1][j]==0){
                d=i;c=j;
                while(a[i][c]==1)c++;
                while(a[d][j]==1) d++;
                ans=max(ans,(c-j)*(d-i));
            }
        }
    }
    cout << ans;
    return 0;
}
/*
3 5
0 1 1 0 1
0 1 1 0 1
0 0 0 1 0
*/