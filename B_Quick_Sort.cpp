#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    ll t = 1;
    ll c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == t){
            c++;
            t++;
        }
    }
    ll rem = n - c;
    ll ans = (n - c) / k;
    if(rem % k != 0){
        ans++;
    }
    cout <<  ans << endl;
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