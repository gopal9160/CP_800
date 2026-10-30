#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n ;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;
        vector<ll> b = a;
        bool flag = 1;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != b[i] % 2){
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
    return 0;
}