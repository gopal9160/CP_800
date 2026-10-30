#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll l = 0, r = 0;
    if(n/2 < k){
        cout << - 1 << endl;
        return;
    }
    int ans = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'L'){
            ans++;
        }
    }
    for(int i = n-k; i < n; i++){
        if(s[i]=='R'){
            ans++;
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