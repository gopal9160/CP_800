#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll  i = 0; i < n; i++){
            cin >> a[i];
        }
        unordered_map<ll,ll> mp;
        ll maxX = 0;
        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        }
        for(auto &it : mp){
            maxX = max(it.second,maxX);
        }
        ll m = mp.size();
        ll ans = max(min(maxX, m - 1), min(maxX - 1, m));
        cout << ans << endl;
    }
    return 0;
}