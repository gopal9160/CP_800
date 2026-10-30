#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k,q;
    cin >> n >> k >> q;
    
    ll m = 250002;
    vector<ll> ps(m,0);
    for(int i = 0; i < n; i++){
        ll l,r;
        cin >> l >> r;
        ps[l]++;
        ps[r+1]--;
    }
    ll sum = 0;
    vector<ll> p1(m,0);
    for(ll i = 0; i < m; i++){
        sum += ps[i];
        p1[i] += sum;
        if(p1[i] >= k){
            p1[i] = 1;
        }else{
            p1[i] = 0;
        }
    }
    for(int i = 1; i < m; i++){
        p1[i] += p1[i-1];
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        cout << p1[r] - p1[l-1] << endl;
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