#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll p,a,b,c;
    cin >> p >> a >> b >> c;
    if(p % a == 0 || p % b == 0 || p % c == 0){
        cout << 0 << endl;
        return;
    }
    ll ans = min({(a - p%a),(b-p%b),(c-p%c)});
    cout << ans << endl;
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