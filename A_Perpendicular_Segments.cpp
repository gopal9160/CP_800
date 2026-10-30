#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    cout << 0 << " " << 0 << " " << min(x,y) << " " << min(x,y) << endl;
    cout << min(x,y) << " " << 0 << " " << 0 << " " << min(x,y) << endl;
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