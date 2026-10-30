#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if((k * k) > n){
            cout << "NO\n";
            continue;
        }
        if(n % 2 == 0){
            if(k % 2 == 0){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }else{
            if(k % 2 == 1){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}