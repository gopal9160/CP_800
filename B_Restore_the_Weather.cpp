#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    vector<pair<ll,ll>> arr(n);
    for(int i=0; i < n; i++){
        arr[i].first = a[i]; 
        arr[i].second = i; 
    }
    sort(all(arr));
    sort(all(b));
    vector<ll> res(n);
    for(int i = 0; i < n; i++){
        res[arr[i].second] = b[i];
    }
    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
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