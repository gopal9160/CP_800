#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;

    int ans = 0;

    if(n <= k){
        ans += k/n;
        if(k % n != 0) ans++;
        cout << ans << endl;
    }else{
        if(n % k == 0){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
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