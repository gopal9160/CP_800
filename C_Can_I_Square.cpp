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
        for(ll &x : a) cin >> x;
        ll sum = 0;
        for(ll i = 0; i < n; i++) sum += a[i];
        ll root = sqrt(sum);
        if(root * root == sum){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}