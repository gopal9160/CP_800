#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(all(a));
    int i = 0, j = n-1;
    ll mini = LLONG_MAX;
    while(i < m && j < m){
        mini = min(mini, a[j] - a[i]);
        i++;
        j++;
    }
    cout << mini << endl;
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