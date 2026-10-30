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
        for(ll &x : a) cin >> x;
        ll odd = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 1){
                odd++;
            }
        }
        if(odd == 0){
            cout << "YES\n";
            continue;
        }
        ll mn = *min_element(a.begin(),a.end());
        if(mn % 2 == 0){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}