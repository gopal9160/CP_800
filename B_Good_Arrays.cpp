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
    if(n==1){
        cout << "NO\n";
        return;
    }
    ll one = 0, sum = 0;
    for(ll i = 0; i < n; i++){
        if(a[i]==1){
            one++;
        }else{
            sum += a[i];
        }
    }
    ll non_one = n - one;
    if(sum - non_one >= one){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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