#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b;
    cin >> a >> b;
    ll a1 = a, b1 = b;
    while(a1 % 2 == 0){a1 /=2;}
    while(b1 % 2 == 0){b1/=2;}
    if(a1!=b1) cout << -1 << endl;
    else{
        a/=a1;
        b/=b1;
        int x1 = log2(a), y1 = log2(b);
        ll ans = ceil(abs(x1-y1)/3.0);
        cout << ans << endl;
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