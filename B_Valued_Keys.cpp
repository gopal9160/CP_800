#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string x, z;
    cin >> x >> z;
    int n = x.size();
    string res = "";
    for(int i = 0; i < n; i++){
        if(x[i] == z[i]){
            res += x[i];
        }else{
            if(x[i] < z[i]){
                cout << -1 << endl;
                return;
            }else{
                res += z[i];
            }
        }
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}