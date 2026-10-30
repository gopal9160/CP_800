#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll t; 
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;
        
        ll sum = 0;
        ll max_alt = a[0];
        for(ll i = 1; i < n; i++){
            if((a[i] > 0 && max_alt > 0) || (a[i] < 0 && max_alt < 0)){
                max_alt = max(max_alt,a[i]);
            }else{
                sum += max_alt;
                max_alt = a[i];
            }
        }
        sum += max_alt;
        cout << sum << endl;
    }
    return 0;
}