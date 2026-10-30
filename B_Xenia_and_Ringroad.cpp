#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(m);
    for(ll &x : a) cin >> x;
    
    ll ans = a[0] - 1;
    for(ll i = 1; i < m; i++){
        if(a[i] < a[i-1]){
            ans += n - (a[i-1] - a[i]);
        }else if(a[i] > a[i-1]){
            ans += (a[i] - a[i-1]);
        }else{
            ans += 0;
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