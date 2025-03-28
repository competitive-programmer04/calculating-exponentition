#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll M=1e9+7;
int binexpo(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*1ll*a)%M;
        }
        b=b>>1;
        a=(a*1ll*a)%M;
    }
    return ans;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<binexpo(x,y);
    return 0;
}