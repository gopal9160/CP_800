#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a){
        cin >> x;
    }
    ll g1 = a[1];
    ll g2 = a[0];
    for(ll i = 2; i < n; i++){
        if(i % 2){
            g1 = __gcd(g1,a[i]);
        }else{
            g2 = __gcd(g2,a[i]);
        }
    }
    bool flag = 1, flag1 = 1;
    for(ll i = 0; i < n; i+=2){
        if(a[i] % g1 == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << g1 << endl;
        return;
    }
    for(ll i = 1; i < n; i+=2){
        if(a[i] % g2 == 0){
            flag1 = 0;
            break;
        }
    }
    if(flag1){
        cout << g2 << endl;
    }else{
        cout << 0 << endl;
    }
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