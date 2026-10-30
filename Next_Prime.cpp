#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin >> t;
    ll n = 10e6;
    vector<ll> si(n+1);
    for(int i = 0; i < n+1; i++){
        for(int j = i*i; j < 10e12; j+=i){
            si[j]++;
        }
    }
    while(t--){
        ll n;
        cin >> n;
        ll ans = 0;
        
        cout << ans << endl;
    }
    return 0;
}