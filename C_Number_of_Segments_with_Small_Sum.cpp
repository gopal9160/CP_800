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

    ll sum = 0;
    ll j = 0;
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        sum += a[i];
        while(sum > k){
            sum -= a[j];
            j++;
        }
        ans += i - j+1;
    }
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}