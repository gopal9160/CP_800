#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int exp = 0;
    int maxi = 0;
    int ans = 0;
    for(int i = 0; i < min(n,k); i++){
        exp+=a[i];
        maxi = max(maxi,b[i]);
        ans = max(ans, exp + (k - (i + 1))*maxi);
    }    
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