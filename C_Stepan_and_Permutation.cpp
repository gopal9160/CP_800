#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(int &x  : a) cin >> x;
    if(x==1 || y == 1){
        cout << "YES\n";
        return;
    }
    int dif = __gcd(x,y);
    for(int i= 0; i< n; i++){
        if(i % dif != (a[i]-1) % dif){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    
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