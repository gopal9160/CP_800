#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll x,y,k;
    cin >> x >> y >> k;

    ll a = y-x;
    ll ans = 0;
    while(k > 0 && x <= a){
        ans += a % x;
        x++;
        k--;
    }
    ans += k * a;
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