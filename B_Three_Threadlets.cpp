#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll  a,b,c;
        cin >> a >> b >> c;
        if(a == b && b == c){
            cout << "YES\n";
            continue;
        }
        ll x = min(a,min(b,c));
        if(a % x != 0 || b % x != 0 || c % x != 0){
            cout << "NO\n";
            continue;
        }
        if(x == a){
            ll ops = 0;
            ops = ((b/x) - 1) + ((c/x) - 1);
            if(ops > 3){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }else if(x == b){
            ll ops = 0;
            ops = ((a/x) - 1) + ((c/x) - 1);
            if(ops > 3){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }else{
            ll ops = 0;
            ops = ((a/x) - 1) + ((b/x) - 1);
            if(ops > 3){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}