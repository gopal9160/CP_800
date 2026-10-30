#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    vector<ll> p(n+1,0);
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i-1];
        p[i] = sum;
    }
    int j = 0;
    ll mini = INT_MAX;
    ll ans = 0;
    for(int i = k; i <= n; i++){
        ll dif = p[i] - p[j];
        if(dif < mini){
            mini = dif;
            ans = j;
        }
        j++;
    }
    cout << ans+1 << endl;
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