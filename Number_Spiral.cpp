#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll r, c;
        cin >> r >> c;
        ll ans;
        if(r >= c){
            ans = (r-1) * (r-1);
            if(r % 2 == 1){
                ans += c;
            }else{
                ans += (r + (r-c));
            }
        }else{
            ans = (c - 1) * (c - 1);
            if(c % 2 == 0){
                ans += r;
            }else{
                ans += (c + (c - r));
            }
        }
        cout << ans << endl;
    }
    return 0;
}