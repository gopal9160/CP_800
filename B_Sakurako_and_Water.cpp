#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for(ll d = 0; d < n; d++){
        ll mini = INT_MAX;
        for(ll i = 0; i < n; i++){
            ll j = i + d;
            if(j < n){
                mini = min(mini,a[i][j]);
            }
        }
        if(mini >= 0){
            continue;
        }else{
            ans += mini;
        }
    }
    for(ll d = 1; d < n; d++){
        ll mini = INT_MAX;
        for(ll i = 0; i < n; i++){
            ll j=i+d;
            if(j < n){
                mini = min(mini,a[j][i]);
            }
        }
        if(mini < 0) ans += mini;
    }
    cout << -ans << endl;
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