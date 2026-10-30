#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<ll> fr(n,0);
    while (q--){
        ll l,r;
        cin >> l >> r;
        l--;
        r--;
        fr[l]++;
        if(r +1 < n){
            fr[r+1]--;
        }
    }
    ll sum = 0;
    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++){
        sum += fr[i];
        fr[i] = sum;
        v.pb({sum,i});
    }
    sort(all(v));
    reverse(all(v));
    sort(all(a));
    reverse(all(a));
    vector<ll> ans(n);
    ll res = 0;
    for(int i = 0; i< n; i++){
        ll sum = v[i].first;
        ll idx = v[i].second;
        ans[idx] = a[i]; 
        res += (sum * a[i]);
    }
    cout << res << endl;
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