#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
#define m 100001
vector<bool> p(m,1);
void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v;
    for(ll i = 2; i * i <= n; i++){
        if(p[i]==0) continue;
        ll p1 = 0;
        while(n % i == 0){
            p1++;
            n/=i;
        }
        if(p1 > 0){
            v.pb({p1, i});
        }
    }
    if(n > 1){
        v.pb({1, n});
    }
    sort(all(v));
    reverse(all(v));
    ll ans = 0, pro = 1;
    for(int i = 0; i < v.size(); i++){
        pro *= v[i].second;
        ll nextFreq = (i + 1 < v.size()) ? v[i + 1].first : 0;
        ans += pro * (v[i].first - nextFreq);
    }
    cout <<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    
    p[0] = 0;
    p[1] = 0;
    for(ll i = 2; i * i < m; i++){
        if (p[i]) {
            for (ll j = i * i; j < m; j += i) {
                p[j] = 0;
            }
        }
    }
    while(t--) {
        solve();
    }

    return 0;
}