#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k,a,b;
    cin >> n >> k >> a >> b;
    vector<ll> x(n);
    vector<ll> y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    ll ans = abs(x[a-1]-x[b-1]) + abs(y[a-1] - y[b-1]);
    ll mini1 = 1e18, mini2 = 1e18;
    for(int i = 0; i < k; i++){
        mini1 = min(mini1, abs(x[a-1]-x[i]) + abs(y[a-1] - y[i]));
        mini2 = min(mini2, abs(x[b-1]-x[i]) + abs(y[b-1] - y[i]));
    }
    ans = min(ans, mini1+mini2);
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