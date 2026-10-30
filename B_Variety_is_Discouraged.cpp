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

    unordered_map<ll,ll> mp;
    ll l = 0, left = 0, right = 0, ans = LLONG_MIN;
    for(ll i = 0; i < n; i++){
        if(mp.count(a[i])){
            l = max(l,mp[a[i]] + 1);
        }
        mp[a[i]] = i;
        ll len = i-l + 1;
        if(len > ans){
            ans = len;
            left = l;
            right = i;
        }
    }
    if(ans==0){
        cout << 0 << endl;
    }
    cout << left << " " << right << endl;

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