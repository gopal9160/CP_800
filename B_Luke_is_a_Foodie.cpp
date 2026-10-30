#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    vector<pair<ll,ll>> v;

    for(int i = 0; i < n; i++){
        v.push_back({a[i]-x, a[i]+x});
    }
    ll ans = 0;
    ll l = v[0].first;
    ll r = v[0].second;
    for(int i = 1; i < n; i++){
        l = max(l,v[i].first);
        r = min(r,v[i].second);
        if(l > r){
            ans++;
            l = v[i].first;
            r = v[i].second;
        }
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