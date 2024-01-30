#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define M_PI=3.14159265358979323846
const int M=1e9+7;
ll mod(ll x){ return ((x%M)+M)%M; }
ll add(ll a,ll b){ return mod(mod(a)+mod(b)); }
ll mul(ll a,ll b){ return mod(mod(a)*mod(b)); }
ll binaryExponentiation(ll a,ll b){
    if(b==0) return 1;
    ll ans = binaryExponentiation(a,b/2);
    if(b%2==1) return mul((mul(ans,ans)),a);
    else return mul(ans,ans);
}
bool sortBySecond(const pair<ll,ll> &a, const pair<ll,ll> &b){ return a.second < b.second; }

void solve(){
    string s;cin>>s;
    ll count1=0;
    ll count0=0;
    for(char x:s){
        if(x=='0') count0++;
        else count1++;
    }
    string t;
    ll count=0;
    for(char x:s){
        if(x=='0'){
            count1--;
            if(count1==-1){
                count=count+s.size()-t.size();
                break;
            }
            t+='1';
        }else{
            count0--;
            if(count0==-1){
                count=count+s.size()-t.size();
            }
            t+='0';
        }
    }
    cout<<count<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--)
    solve();
}
