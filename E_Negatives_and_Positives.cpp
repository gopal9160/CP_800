#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll c = 0;
    ll sum = 0;
    ll mini = LLONG_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            c++;
        }
        sum += (abs(a[i]));
        mini = min(abs(a[i]), mini);
    }
    if(c % 2 == 0){
        cout << sum << endl;
    }else{
        cout << sum - mini - mini << endl;
    }
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