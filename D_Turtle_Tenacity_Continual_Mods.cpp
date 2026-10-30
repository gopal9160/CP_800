#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(all(a));
    if(a[0]!=a[1]){
        cout << "YES" << endl;
    }else{
        bool ok = 1;
        for(int i = 0; i < n; i++){
            if(a[i] % a[0] != 0){
                cout << "YES\n";
                return;
            }
        }
        cout << "NO" << endl;
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