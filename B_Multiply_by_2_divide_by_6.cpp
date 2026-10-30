#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll pow2 = 0, pow3 = 0;
        while(n % 2 == 0){
            pow2++; n /= 2;
        }
        while(n % 3 == 0){
            pow3++; n /= 3;
        }
        if(n > 1 || pow2 > pow3){
            cout << -1 << endl;
        }else{
            cout << (pow3-pow2) + pow3 << endl;
        }
    }
    return 0;
}