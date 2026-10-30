#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n-1);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    int ans = 0;
    vector<int> res(n-1);
    for(int i = 1; i < n-1; i++){
        int num = a[i] + a[i-1];
        int num2 = a[i] + a[i+1];
        if(num % 2 != b[i])
        res[i] = num % 2;
    }
    for(int i = 0; i < n-1; i++){
        if(res[i] != )
    }
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