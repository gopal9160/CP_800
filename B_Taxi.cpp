#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll sum = 0, ans = 0;
    sort(all(a));
    ll j = 0;
    for(ll i = 0; i < n; i++){
            
        if(sum + a[i] > 4){
            ans++;
            j = i;
            break;
        }else{
            sum += a[i];
        }
    }
    ans += n-j;
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