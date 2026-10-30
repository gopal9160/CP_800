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
    bool sorted = 1;
    for(ll i = 1; i < n; i++){
        if(a[i-1] > a[i]){
            sorted = 0;
            break;
        }
    }
    if(sorted){
        cout << "YES\n";
    }else{
        ll k = INT_MIN;

        for(ll i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                k = max(k, a[i] - a[i+1]);
            }
        }
        bool flag = 1;
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                a[i+1]+=k;
            }
            if(a[i] > a[i+1]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
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