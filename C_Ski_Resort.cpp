typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for(ll &it:a) cin >> it;
        for(int i = 0; i < n; i++){
            if(a[i] <= q){
                a[i] = 1;
            }else{
                a[i] = 0;
            }
        }
        ll len = 0;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                len++;
            }else{
                if(len >= k){
                    ll m = len - k + 1;
                    ans += (m*(m+1)) / 2;
                } 
                len = 0;
            }
        }
        if(len >= k){
            ll m = len - k + 1;
            ans += (m*(m+1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}