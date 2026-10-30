#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    if(k==1){
        ll total = accumulate(all(a), 0LL);
        cout << total << endl;
        return;
    }
    ll m = k;
    k-=1;
    ll mini = 0;
    for(int i = 0; i < k; i++){
        mini += a[i];
    }
    ll ans = 0;
    for(int i = n-k; i < n; i++){
        ans += a[i];
    }
    ll total = accumulate(all(a), 0LL);
    cout << total - min(ans,mini) << endl;

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