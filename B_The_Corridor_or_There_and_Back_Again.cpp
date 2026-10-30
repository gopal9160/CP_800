#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    sort(all(a));
    ll ans = a[0][0] + (a[0][1] / 2);
    if(a[0][1] % 2 == 0){
        ans--;
    }
    for(int i = 1; i < n; i++){
        ll dist = a[i][0] + (a[i][1] / 2);
        if(a[i][1] % 2 == 0){
            dist--;
        }
        ans = min(dist,ans);
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