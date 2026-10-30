#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    ll ans = 1;
    ll wd = k;
    ll l = n-k + 1;
    for(int i = 1; i <= l; i++){
        ans *= 2;
    }
    k--;
    ans += (2 * (k));
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