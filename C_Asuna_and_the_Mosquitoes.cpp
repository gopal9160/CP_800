#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    ll odd = 0, even = 0, sum = 0, maxi = 0, maxi1 = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] % 2==1){
            maxi = max(a[i], maxi);
            odd++;
        }else{
            even++;
        }
        maxi1 = max(a[i], maxi1);
        sum += a[i];
    }
    if(even == 0){
        cout << maxi << endl;
    }else if(odd == 0){
        cout << maxi1 << endl;
    }else{
        cout << sum - (odd-1) << endl;
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