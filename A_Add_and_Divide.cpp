#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b;
    cin >> a >> b;
    ll ans = LLONG_MAX;
    if(b != 1){
        ll n1 = a;
        ll ops = 0;
        while(n1 > 0){
            n1 = n1 / b;
            ops++;
        }
        ans = min(ops, ans);
    }
    for(ll i = b+1; i <= b+30; i++){
        ll ops = i - b;
        ll num = a;
        while(num != 0){
            num = num / i;
            ops++;
        }
        ans = min(ans, ops);
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