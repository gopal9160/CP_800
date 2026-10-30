#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll,ll> mp;
    for(ll &x : a){
        mp[x]++;
    }
    for(auto &p : mp){
        if(p.second == 1){
            cout << -1 << endl;
            return;
        }
    }
    vector<ll> res(n);
    for(int i = 0; i < n; i++){
        res[i] = i + 1;
    }
    ll l = 0, r = 0;
    while(r < n){
        if(a[l] == a[r]){
            r++;
        }else{
            rotate(res.begin() + l, res.begin() + l + 1, res.begin() + r);
            l = r;
        }
    }
    rotate(res.begin() + l, res.begin() + l + 1, res.begin() + r);

    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
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