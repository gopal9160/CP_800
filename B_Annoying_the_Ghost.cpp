#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    ll ans = 0;
    for(int i = 0; i < n; i++){
        int j = i;
        while(j < n && a[j] > b[i]) j++;
        if(j == n){
            cout << -1 << endl;
            return;
        }
        ans += (j-i);
        while(j > i){
            swap(a[j-1],a[j]);
            j--;
        }
        
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