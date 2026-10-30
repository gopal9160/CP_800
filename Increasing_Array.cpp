typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &it:a) cin >> it;
    ll moves = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            moves = moves + (a[i-1]-a[i]);
            a[i] += (a[i-1]-a[i]);
        }else{
            continue;
        }
    }
    cout << moves << endl;
    return 0;
}