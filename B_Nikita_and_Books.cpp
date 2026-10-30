#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll & x: a) cin >> x;
    ll sum = 0;
    bool flag = 1;
    for(int i = 0; i < n; i++){
        sum += a[i];
        ll num = i+1;
        ll s = num * (num + 1) / 2;
        if(sum < s){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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