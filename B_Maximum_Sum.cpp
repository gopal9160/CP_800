#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    sort(all(a));
    vector<ll> b(n+1,0);
    for(int i = 1; i <= n; i++){
        b[i] = a[i-1] + b[i-1];
    }
    ll ans = LLONG_MIN;
    for(int j = 0; j <= k; j++){
        int l = 2 * j;
        int r = n-(k-j);
        ans = max(ans,b[r]-b[l]);
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