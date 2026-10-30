#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    vector<ll> a(3);
    for(ll &x : a){
        cin >> x;
    }
    sort(all(a));
    if(a[0]==a[2]){
        cout << 0 << endl;
    }else{
        if(a[2] <= a[0] + a[1]){
            cout << a[2] - a[0] << endl;
        }else{
            
            ll maxi = a[0] + a[1];
            ll ans = maxi - a[0];
            cout << ans << endl;
            
        }
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