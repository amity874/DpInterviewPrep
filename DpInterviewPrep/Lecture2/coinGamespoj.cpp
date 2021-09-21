#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll dp[1000001];
void precalculate(ll k,ll l,ll m){
    for(int i=2;i<=1000001;i++){
        if (i-1 >= 0 and dp[i-1] == 0) dp[i] = 1;
		if (i-k >= 0 and dp[i-k] == 0) dp[i] = 1; 
		if (i-l >= 0 and dp[i-l] == 0) dp[i] = 1;
    }
}
int main(int argc, char const *argv[]){
    memset(dp,0,sizeof(dp));
    ll k;
    ll l;
    ll m;
    cin>>k>>l>>m;
    ll x;
    precalculate(k,l,m);
    for(int i=1;i<=m;i++){
        cin>>x;
        if(dp[x]==1){
            cout<<'A';
        }
        else{
            cout<<'B';
        }
    }
return 0;
}