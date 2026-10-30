#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n ;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;
    if(n==2){
        for(int i = n-1; i >= 0; i--){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(ll i = 0; i < n; i++){
        if(a[i]==n){
            cout << a[i] << " ";
        }else{
            cout << n-a[i] << " ";
        }
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