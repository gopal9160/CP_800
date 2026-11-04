#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> a(m, vector<ll> (n));
    for(ll i = 0; i < n; i++)
    for(ll j = 0; j < m; j++)
    cin >> a[j][i];

    for(ll i = 0; i < m; i++){
        sort(a[i].begin(), a[i].end());
    }
    ll sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sum -= (a[i][j] * (n - j - 1));
            sum += (a[i][j] * j);
        }
    }
    cout << sum << endl;

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