#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll &i : a) cin >> i;
        sort(a.rbegin(),a.rend());
        ll ans = 0;
        ll extra = 0;
        bool flag1 = 0;
        if(n > 1 && a[1] == 1 && a[0] >= 2) flag1 = true;
        for(ll i : a){
            if(i == 1){
                if(extra > 0){
                    ans++;
                    extra--;
                }else if(flag1){
                    flag1 = 0;
                    ans++;
                }
            }else{
                ans += i;
                if(i >= 4){
                    extra += (i-2) / 2;
                }
            }
        }
        if(ans < 3){
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}