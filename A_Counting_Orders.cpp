#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    ll mod = 1e9+7;
    ll ans = 1;
    for(int i = 0; i < n; i++){
        ll c1 = upper_bound(all(a), b[i]) - a.begin();
        ll c2 = n-c1;
        ans = ans * max(0LL, c2-i) % mod;
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