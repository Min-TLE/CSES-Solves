//https://cses.fi/problemset/task/1754
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
        ll a,b; cin >> a >> b;
        if(b > a) swap(a,b);
        if(a > b * 2 || (a + b) % 3 != 0){
            cout << "NO" << endline;
        }else{
            cout << "YES" << endline;
        }
    }
    return 0;
}