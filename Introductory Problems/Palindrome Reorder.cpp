//https://cses.fi/problemset/task/1755
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
    char t;
    map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    int cnt = 0;
    for(auto it : mp){
        if(it.second % 2){
            t = it.first;
            cnt++;
        }
    }
    if((s.size() % 2 == 0 && cnt > 0) || cnt > 1){
        cout << "NO SOLUTION";
    }else{
        string ans = "";
        for(auto it : mp){
            for(int i = 1; i <= it.second / 2; i++){
                ans += it.first;
            }
        }
        cout << ans;
        if(s.size() % 2){
            cout << t;
        }
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    return 0;
}