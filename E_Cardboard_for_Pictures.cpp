#include <bits/stdc++.h>
using namespace std;
typedef unsigned __int128 uint128;
typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

uint128 bs(ll mid, ll c, vector<ll> &a){
    uint128 sum = 0;
    for(ll x :a){
        uint128 s = (x + (2 * (uint128)mid));
        sum += s * s;
        if(sum > c){
            return sum;
        }
    }
    return sum;
}
void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for(ll & x : a) cin >> x;
    ll ans = 0;
    ll low = 0, high = 1e9;
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        uint128 omega = bs(mid, c, a);
        if(omega == c) {
            ans = mid;
            break;
        } else if(omega > c) {
            high = mid - 1;
        } else {
            low = mid + 1;
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