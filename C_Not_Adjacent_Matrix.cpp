#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    if(n==2){
        cout << -1 << endl;
        return;
    }
    vector<int> a;
    for(int i = 1; i <= n*n; i+=2){
        a.pb(i);
    }
    for(int i = 2; i <= n*n; i+=2){
        a.pb(i);
    }
    int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[p] << " ";
            p++;
        }
        cout << endl;
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