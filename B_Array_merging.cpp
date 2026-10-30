typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll &it : a) cin >> it;
        for(ll &it : b) cin >> it;
        ll a1 = 1,b1 = 1, mx = 1;
        ll ele = a[0];
        unordered_map<ll,ll> mp1,mp2;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                a1++;
            }else{
                mp1[a[i-1]] = max(mp1[a[i-1]],a1);
                a1 = 1;
            }
        }
        mp1[a[n-1]] = max(mp1[a[n-1]],a1);
        for(int i = 1; i < n; i++){
            if(b[i] == b[i-1]){
                b1++;
            }else{
                mp2[b[i-1]] = max(mp2[b[i-1]],b1);
                b1 = 1;
            }
        }
        mp2[b[n-1]] = max(mp2[b[n-1]],b1);
        ll ans = 0;
        for(auto &p : mp1){
            ll x = p.first;
            ans = max(mp1[x] + mp2[x],ans);
        }
        for(auto &p : mp2){
            ll x = p.first;
            ans = max(mp1[x] + mp2[x],ans);
        }
        cout << ans << endl;
    }
    return 0;
}