#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    if(n >= 0){
        cout << n << endl;
    }else{
        ll ld1 = n / 10;
        ll ld2 = n / 100;
        ll num = n % 10;
        ld2 = ld2 * 10 + num;
        cout << max(ld1,ld2) << endl;
    }
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