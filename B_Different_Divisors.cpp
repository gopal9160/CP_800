#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
bool isprime(ll x){
    ll fact = 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i==0){
            return false;
        }
    }
    return 1;
}
ll primnum(ll x){
    while(!isprime(x)){
        x++;
    }
    return x;
}c
void solve() {
    ll d;
    cin >> d;

    ll a = primnum(d+1);
    ll b = primnum(a+d);

    cout << min(a * b, b * b * b) << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}