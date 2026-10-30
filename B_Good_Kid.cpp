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
        ll mn = *min_element(a.begin(),a.end());
        ll present = 1;
        bool flag = 1;
        for(ll &x : a){
            if(x == mn && flag){
                x++;
                flag = 0;
            }
            present *= x;
        }
        cout << present << endl;
    }
    return 0;
}