#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll roll = 4*n;
        roll += ((n*(n-1)) / 2 + ((n-2)*(n-1)) / 2) + 1;
        cout << roll << endl;
    }
    return 0;
}