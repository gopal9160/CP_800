#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x  : a) cin >> x;
    sort(all(a));
    if(n == 2){
        cout << a[0] << " " << a[1] << endl;
        return;
    }
    ll pos = 0;
    ll mini = LLONG_MAX;
    for(int i = 1; i < n; i++){
        if(mini > a[i]-a[i-1]){
            pos = i;
            mini = a[i] - a[i-1];
        }
    }
    for(int i = pos; i < n; i++){
        cout << a[i] << " ";
    }
    for(int i = 0; i < pos; i++){
        cout << a[i] << " ";
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