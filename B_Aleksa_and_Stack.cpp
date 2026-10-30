#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ele = 1;
        for(int i = 0; i < n; i++){
            cout << ele << " ";
            ele += 2;
        }
        cout << endl;
    }
    return 0;
}