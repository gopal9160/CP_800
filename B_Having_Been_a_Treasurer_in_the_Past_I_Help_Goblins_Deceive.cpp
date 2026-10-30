#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll d = 0, u = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '-'){
            d++;
        }else{
            u++;
        }
    }
    ll ans;
    if(d % 2 == 0){
        ans = d/2 * d/2 * u;
    }else{
        ans = d/2 * (d/2 + 1) * u;
    }
    
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}