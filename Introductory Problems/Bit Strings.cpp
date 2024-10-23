//https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
using namespace std;
#define endline "\n"
#define ll long long
#define ld long double
#define FOR(i,a,b,c) for(int i = (a); i <= (b); i+=c)
#define FOD(i,a,b,c) for(int i = (a); i <= (b); i-=c)
#define AnDepTrai ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define file(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
const int MOD = 1e9 + 7;

ll bpow(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b & 1) ans = (ans % MOD * a % MOD) % MOD;
        a = (a % MOD * a % MOD) % MOD;
        b >>= 1;
    }
    return ans;
}
int main(){
    AnDepTrai
    ll n; cin >> n;
    cout << bpow(2,n);
    return 0;
}