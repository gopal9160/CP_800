typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
vector<ll> a(MAX + 1,0);
int main(){
    ll t;
    cin >> t;
    for(ll i = 1; i <= MAX; i++){
        for(ll j = i; j <= MAX; j+=i){
            a[j]++;
        }
    }
    while(t--){
        ll x;
        cin >> x;
        cout << a[x] << endl;
    }
    return 0;
}