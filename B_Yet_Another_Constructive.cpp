#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k,m;
    cin >> n >> k >> m;
    if(k > m){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<int> a(n);
    for(int i = 0; i < k-1; i++){
        a[i] = 1;
    }
    a[k-1] = m-k-1;
    for(int i = k; i < n; i++){
        a[i] = 1;
    } 
    for(int i = 0; i< n; i++) cout << a[i] << " ";
    cout << endl;
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