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
    ll maxi = a[0];
    ll sum = a[0];
    ll j = 0;
    bool pari = abs(a[0]) % 2;
    for(ll i = 1; i < n; i++){
        if(pari != abs(a[i]) % 2){
            sum=max(sum+a[i],a[i]);
            maxi = max(maxi,sum);
            pari = !pari;
        }else{
            sum = a[i];
            maxi = max(maxi,sum);
        }
    }
    cout << maxi << endl;
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