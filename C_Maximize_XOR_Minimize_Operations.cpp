#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a, b;
    cin >> a >> b;
    ll s = a + b;
    if((a & ~s) == 0) {
        cout << s << " " << 0 << endl;
        return;
    }
    ll nxt = 0;
    for(ll i = 30; i >= 0; i--) {
        if((a & (1LL << i)) && !(s & (1LL << i))) {
            nxt = i;
            break;
        }
    }
    ll x = (a >> (nxt + 1)) << (nxt + 1);
    x |= (s & ((1LL << nxt) - 1));
    ll ops = a - x;
    cout << s << " " << ops << endl;
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