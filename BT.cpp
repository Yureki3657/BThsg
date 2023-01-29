#include <bits/stdc++.h>
using namespace std;
string s,so;
long ans;
int main() {
    freopen("BT.inp","r",stdin);
    freopen("BT.out","w",stdout);
    getline(cin ,s);
    if(!(s[0]=='-')) s='+'+s; 
    //cout << s << endl;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            so="";
            while(s[i+1]<='9'&&s[i+1]>='0') {
                so=so+s[i+1];i++;
                //cout << 1 << " " <<i<< endl;
                }
            ans+=atoi(so.c_str());
            //cout << so << endl;
        }else if(s[i]=='-'){
            so="";
            while(s[i+1]<='9'&&s[i+1]>='0'){
                so=so+s[i+1];i++;
                //cout << 2 << " " << i<<endl;
                }
            ans-=atoi(so.c_str());
            //cout << so << endl;
        }
    }
    cout << ans;
    return 0;
}