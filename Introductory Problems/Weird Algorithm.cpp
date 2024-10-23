//https://cses.fi/problemset/task/1068
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
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
            cout << n << " ";
        }else{
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
    return 0;
}