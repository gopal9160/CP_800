#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
pair<int,int> Biny (auto& a, auto& pref, int target){
    int n = a.size();
    

}
void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;

    vector<ll> pref(n);
    pref[0] = a[0];
    for(ll i = 1; i< n; i++){
        pref[i] = pref[i-1] +  a[i];
    }
    for(ll i = 0; i < m; i++){
        ll low = 0, high = n-1;
        ll place = 0;
        auto idx = lower_bound(all(pref), b[i]) - pref.begin();
        if(idx == 0){
            place = b[i];
        }else{
            place = b[i] - pref[idx-1];
        }
        cout << idx+1 << " " << place << endl;
    }
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