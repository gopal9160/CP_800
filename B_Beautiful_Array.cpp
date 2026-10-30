typedef long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k, b ,s;
        cin >> n >> k >> b >> s;
        ll st = k * b, end =(k*b) + ((k-1) * n);

        if(st > s || s > end){
            cout << "-1\n";
        }else{
            vector<ll> a(n,0);
            a[0] = st;
            s -= st;
            for(int i = 0; i < n; i++){
                ll sum = min(s,k-1);
                a[i] += sum;
                s -= sum;
            }
            for(ll &x : a){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}