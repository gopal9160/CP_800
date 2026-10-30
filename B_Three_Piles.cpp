#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;

    if(a>=b){
        ll t = a + c;
        cout << t - b << endl;
    }else{
        ll x = b-a;
        ll y = (a+c) - b;
        cout << max(x,y) << endl;
    }
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