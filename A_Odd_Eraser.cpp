#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
bool isprime(int n){
    int c = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll gc = __gcd(a[0],a[n-1]);
    cout << gc << endl;
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