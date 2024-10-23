//https://cses.fi/problemset/task/1094
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
int main(){
    AnDepTrai
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i-1] > a[i]){
            ans += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << ans;
    return 0;
}