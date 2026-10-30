#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m);

    for(int& x : a) cin >> x;
    int i = 1;
    while(i < m && a[i] == a[i-1] + 1) i++;
    if(i == m){
        cout << n - a[m-1] + 1 << endl;
    }else{
        cout << 1 << endl;
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