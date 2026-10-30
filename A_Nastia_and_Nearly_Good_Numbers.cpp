#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b;
    cin >> a >> b;
    if(b==1){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        cout << a << " " << a*b << " " << a * (b+1) << endl;
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