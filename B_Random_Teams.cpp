#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m;
    cin >> n >> m;
    if(m >= n){
        cout << 0 << " " << 0 << endl;
        return;
    }
    ll f = n/m;
    ll rem = n % m;

    ll mini = ((f * (f - 1)) / 2) * (m - rem);
    f++;
    mini += ((f * (f - 1)) / 2) * rem;
    ll maxi;
    ll p = n-m;
    ll f1 = 1;
    f1 += p;
    maxi = (f1 * (f1 - 1)) / 2;
    cout << mini << " " << maxi << endl;
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