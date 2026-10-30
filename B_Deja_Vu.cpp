#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;
    unordered_set<ll> st;
    ll maxi = *max_element(all(a));
    
    for(auto x : b){
        if(st.count(x)) continue;
        else st.insert(x);
        ll val = 1LL << x;
        if(val > maxi) continue;
        for(ll j = 0; j < n; j++){
            if(a[j] % val ==0){
                a[j] += (val / 2LL); 
            }
        }
    }
    
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
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