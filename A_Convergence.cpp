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
    sort(all(a));
    ll ans = 0;
    ll i;
    if(n%2==0){
        i = n/2;
    }else{
        i = n/2;
    }
    ll t = a[i];
    for(ll  j= i; j < n; j++){
        if(a[j]!=t){
            ans++;
        }
    }
    ll ans1 = 0;
    for(ll j = 0; j < i; j++){
        if(a[j]!=t){
            ans1++;
        }
    }
    ans = max(ans,ans1);
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