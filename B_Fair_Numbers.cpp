#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = n; ;i++){
        ll num = i;
        bool flag = 1;
        while(num != 0){
            ll ld = num % 10;
            num/=10;
            if(ld == 0) continue;
            if(i % ld != 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            ans = i;
            break;
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