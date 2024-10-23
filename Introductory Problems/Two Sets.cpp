//https://cses.fi/problemset/task/1092/
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
vector<ll> v1,v2;
int main(){
    AnDepTrai
    ll n; cin >> n;
    ll sum = n * (n + 1) / 2;
    if(sum & 1){
        cout << "NO";
        return 0;
    }else{
        
        cout << "YES" << endline;
        ll tmp = sum / 2;
        while(n){
            if(tmp - n >= 0){
                v1.push_back(n);
                tmp -= n;
            }else{
                v2.push_back(n);
            }
            n--;
        }
        cout << v1.size() << endline;
        for(auto it : v1){
            cout << it << " ";
        }
        cout << endline;
        cout << v2.size() << endline;
        for(auto it : v2){
            cout << it << " ";
        }
    }
    return 0;
}