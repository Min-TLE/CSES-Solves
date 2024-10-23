//https://cses.fi/problemset/task/1070
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
    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }
 
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    for(int i = 1; i <= n; i+=2){
        cout << i << " ";
    }
    return 0;
}