typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;
        vector<pair<ll,ll>> b;
        for(ll i = 0; i < n; i++){
            a[i] = a[i] % k;
            if(a[i] == 0){
                cout << i+1 << " ";
            }else{
                b.push_back({a[i],i});
            }
        }
        sort(b.begin(),b.end());
        stable_sort(b.begin(),b.end());
        for(auto &p : b){
            cout << p.second+1 << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}