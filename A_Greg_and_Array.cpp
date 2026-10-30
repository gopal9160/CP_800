#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ,m, k;
    cin >> n>>m>>k;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    vector<vector<ll>> v;
    for(int i = 0; i < m; i++){
        ll l,r,d;
        cin >> l >> r >> d;
        l--,r--;
        v.pb({l,r,d});
    }
    vector<ll> ps(m+1,0);
    while(k--){
        ll l,r;
        cin >> l >> r;
        l--;
        r--;
        ps[l]++;
        ps[r+1]--;
    }
    ll sum = 0; 
    vector<ll> t(n+1,0);
    for(int i = 0; i < m; i++){
        sum += ps[i];
        
        v[i][2] *= sum;

        t[v[i][0]] += v[i][2];
        t[v[i][1] + 1] -= v[i][2];
    }
    sum = 0;
    for(int i = 0; i < n; i++){
        sum += t[i];
        t[i] = sum;
        cout << sum + a[i] << " ";
    }
    cout << endl;
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