//https://cses.fi/problemset/task/1618/
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
    ll n; cin >> n;
    ll cnt = 0;
    for(int i = 5; i <= n; i+= 5){
        ll tmp = i;
        while(tmp % 5 == 0){
            cnt++;
            tmp /= 5;
        }
    }
    cout << cnt;
    return 0;
}