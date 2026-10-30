#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans = a + b + c;
    cout << max({a*(b+c),(a+b)*c,a*b*c,a + b + c}) << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}