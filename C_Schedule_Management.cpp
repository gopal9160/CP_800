#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<ll,ll> mp;
bool cancan(ll mid, ll n, ll m){
    ll maxi = 0;
    for(ll i = 1; i <= n; i++){
        if(mid < mp[i]){
            maxi += mid;
        }else{
            maxi += mp[i] + (mid - mp[i]) / 2;
        }
    }
    if(maxi >= m){
        return true;
    }else{
        return false;
    }
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        mp.clear();
        ll n,m;
        cin >> n >> m;
        vector<ll> a(m);
        for(ll &x: a) cin >> x;
        
        ll ans = 0;
        for(ll x : a){
            mp[x]++;
        }
        ll low = 1, high = 2*m;
        while(low <= high){
            ll mid = low + (high - low) / 2;
            if(cancan(mid,n,m)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}