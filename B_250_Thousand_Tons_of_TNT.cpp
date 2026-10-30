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
        ll ans = LLONG_MIN;
        for(int i=1; i <= n; i++){
            ll max_sum = LLONG_MIN;
            ll min_sum = LLONG_MAX;
            if(n % i == 0){
                ll sum = 0;
                for(int j = 0; j < n; j++){
                    sum += a[j];
                    if((j+1) % i == 0){
                        max_sum = max(max_sum,sum);
                        min_sum = min(min_sum,sum);
                        sum = 0;
                    }
                }
                ans = max(abs(max_sum-min_sum),ans);
            }else{
                continue;
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}