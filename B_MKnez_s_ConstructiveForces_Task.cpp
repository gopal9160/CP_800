#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    if(n % 2 == 1 && n == 3){
        cout << "NO\n";
    }else if(n % 2 == 0){
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                cout << (n-1) / 2 << " ";
            }else{
                cout << (n+1) / 2 << " ";
            }
        }
        cout << endl;
    }else{
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                cout << 1 << " ";
            }else{
                cout << -2 << " ";
            }
        }
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