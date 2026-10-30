#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
map<int,int> mp;
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;

    vector<pair<ll,ll>> temp;
    for(ll i = 0; i < n; i++){
        temp.pb({a[i],i});
    }
    sort(all(temp));
    sort(all(a));
    vector<ll> pref;
    for(ll i = 0; i < n; i++){
        pref.push_back(temp[i].first);
    }
    for(ll i = 1; i < n; i++){
        pref[i] += pref[i-1];
    }
    vector<ll> res(n);
    for(ll i = 0; i < n; i++){
        ll j = i;
        ll ans = i;
        while(j < n){
            ll target = pref[j] + 1;
            ll idx = lower_bound(all(a), target) - a.begin();
            idx--;
            if(idx == j){
                break;
            }
            ans += idx - j;
            j = idx;
        }
        res[temp[i].second] = ans;
    }
    for(auto it : res){
        cout << it << " ";
    }
    cout << endl;
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