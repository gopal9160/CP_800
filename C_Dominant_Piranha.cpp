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
    
    ll maxi = *max_element(all(a));
    ll ans = -1;
    for(ll i = 1; i < n-1; i++){
        if(a[i]==maxi){
            if(a[i-1] < maxi){
                ans = i;
                break;
            }else if(a[i+1] < maxi){
                ans = i;
                break;
            }
        }
    }
    if(ans == -1){
        if(a[0]==maxi && a[1] < maxi){
            ans = 0;
        }else if(a[n-1]==maxi && a[n-2] < maxi){
            ans = n-1;
        }
    }
    if(ans >= 0){
        cout << ans+1 << endl;
    }else{
        ll mx = 0;
        ll idx = 0,res = 0;
        for(int i = 0; i < n; i++){
            if(a[i]==maxi){
                idx = i;
                break;
            }else{
                if(a[i] > mx){
                    mx = a[i];
                    res = i;
                }
            }
        }
        mx += idx-1;
        if(mx > maxi){
            cout << res+1 << endl;
        }else{
            ll mx1 = 0, idx1 = 0, res1 = 0;
            reverse(all(a));
            for(int i = 0; i < n; i++){
                if(a[i]==maxi){
                    idx1 = i;
                    break;
                }else{
                    if(a[i] > mx){
                        mx1 = a[i];
                        res1 = i;
                    }
                }
            }
            mx += idx1-1;
            if(mx > maxi){
                cout << res1+1 << endl;
            }else{
                cout << -1 << endl;
            }
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