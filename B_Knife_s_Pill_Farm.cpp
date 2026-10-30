#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    priority_queue<ll> pq;
    ll sum = 0, ans = LLONG_MIN;
    for(ll i = 0; i < n; i++){
        if(pq.size()==m-1){
            ans = max(ans, m * 1LL * a[i] - sum);
        }
        pq.push(a[i]);
        sum += a[i];
        if(pq.size() > m-1){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << ans << endl;
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