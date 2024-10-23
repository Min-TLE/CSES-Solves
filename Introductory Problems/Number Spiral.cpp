//https://cses.fi/problemset/task/1071
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
    int t; cin >> t;
    while(t--){
        ll y,x; cin >> y >> x;
        if(y > x){
            ll t = (y - 1) * (y - 1);
            ll ans = 0;
            if(y % 2 != 0){
                ans = x;
            }else{
                ans = 2 * y - x;
            }
            cout << ans + t << endline;
        }else{
            ll t = (x - 1) * (x - 1);
            ll ans = 0;
            if(x % 2 == 0){
                ans = y;
            }else{
                ans = 2 * x - y;
            }
            cout << ans + t << endline;
        }
    }
    return 0;
   
}