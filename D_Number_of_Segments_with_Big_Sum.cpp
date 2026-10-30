#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, target;
    cin >> n >> target;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll j = 0;
    ll sum = 0,ans = 0;
    for(ll i = 0; i < n; i++){
        sum += a[i];
        while(sum >= target){
            ans+= (n-i);
            sum -= a[j];
            j++;
        }
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