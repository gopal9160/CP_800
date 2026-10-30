#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll q;
    cin >> q;
    vector<ll> ty1(n+1,0);
    vector<ll> ty2(n+1,0);
    ll sum = 0;
    for(ll i = 1; i <= n; i++){
        sum += a[i-1];
        ty1[i] = sum;
    }
    sort(all(a));
    sum = 0;
    for(ll i = 1; i <= n; i++){
        sum += a[i-1];
        ty2[i] = sum;
    }
    while(q--){
        ll type, l, r;
        cin >> type >> l >> r;
        l--;
        if(type==1){
            cout << ty1[r] - ty1[l] << endl;
        }else{
            cout << ty2[r] - ty2[l] << endl;
        }
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