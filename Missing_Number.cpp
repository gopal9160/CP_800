typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll &it:a) cin >> it;
    ll sum = accumulate(a.begin(),a.end(),0LL);
    ll s = (n*(n+1)) / 2;
    ll miss = s - sum;
    cout << miss << endl;
    return 0;
}