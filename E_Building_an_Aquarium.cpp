#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
ll fun(ll mid, vector<ll> &a){
    ll ans = 0;
    for(int i = 0; i < a.size(); i++){
        ans += max (mid - a[i],0LL);
    }
    return ans;
}
void solve() {
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll low = 0, high = 2'000'000'007;
    ll ans = 0;
    sort(all(a));
    while(low <= high){
        ll mid = low + (high - low ) / 2;
        ll res = fun(mid,a);
        if(res <= x){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
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