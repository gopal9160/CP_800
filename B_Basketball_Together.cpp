#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve() {
    ll n , d;
    cin >> n >> d;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    sort(a.rbegin(),a.rend());
    ll ans = 0;
    ll j = n-1;
    
    for(ll i = 0; i < n && i <= j; i++){
        ll need = (d/a[i]) + 1;
        if(i + need -1 > j){
            break;
        }else{
            j -= (need-1);
            ans++;
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