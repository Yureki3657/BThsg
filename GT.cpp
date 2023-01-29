#include <bits/stdc++.h>
using namespace std;
long n,t=30001,prime[30001];
map<long,long> mp;

void sang(){
    prime[0]=1;prime[1]=1;
    for(int i=2;i<=sqrt(t);i++)
        if(prime[i]==0)
        for(int j=i*i;j<t;j+=i) prime[j]=1;
}

void pt(long n){
    if(prime[n]==0) mp[n]++;
    else{
        int i=2;
        while(n>1){//cout << n << " " << i <<endl;
            if(n%i==0){mp[i]++;n/=i;}
            else i++;
        }   
    }
}
int main(){
    freopen("GT.inp","r",stdin);
    freopen("GT.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    
    sang();
    cin >> n;

    for(int i=2;i<=n;i++)
       pt(i);

    for(pair<long,long> x : mp) 
        cout << x.second << " ";
    
    return 0;
}
    