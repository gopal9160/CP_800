#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll xa,ya,xb,yb,xc,yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if(xa <= max(xb,xc) && xa >= min(xb,xc) && ya <= max(yb,yc) && ya >= min(yb,yc)){
        cout << 1 << endl;
    }else{
        ll ans = abs(xa-xb) + abs(ya-yb) + abs(xa-xc) + abs(ya-yc) - (abs(xb-xc) + abs(yb-yc));
        ans = ans / 2;
        cout << ans + 1<< endl;
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