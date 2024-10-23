//https://cses.fi/problemset/task/1069
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
    string s; cin >> s;
    int cnt = 1;
    int m = 0;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            cnt++;
        }else{
            m = max(m, cnt);
            cnt = 1;
        }
    }
    cout << max(m,cnt);
    return 0;
}