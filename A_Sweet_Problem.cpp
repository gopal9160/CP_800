#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    vector<ll> a(3);
    for(ll &x : a) cin >> x;
    sort(all(a));
    if(a[2] <= a[0] + a[1]){
        cout << accumulate(all(a),0LL) / 2 << endl;
    }else{
        cout << a[0] + a[1] << endl;
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