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
    ll m;
    cin >> m;
    vector<ll> b(m);
    for(ll &x : b) cin >> x;
    ll sum = 0;
    for(ll &x : b){
        sum += x;
    }
    if(sum % n==0){
        cout << a[0] << endl;
    }else{
        cout << a[sum % n] << endl;
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