#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(a==b){
            cout << 0 << " " << 0 << endl;
            continue;
        }
        long long old_gcd = __gcd(a,b);
        long long new_gcd = abs(a-b);
        if(old_gcd == new_gcd){
            cout << new_gcd << " " << 0 << endl;
            continue;
        }
        long long ops = min((new_gcd - (min(a,b) % new_gcd)) % new_gcd,min(a,b) % new_gcd);
        
        cout << new_gcd << " " << ops << endl;
    }
    return 0;
}