#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    int k = n;
    vector<int> a(n);
    int j = 3;
    for(int i = 1; i < n-1; i++){
        a[i] = j++;
    }
    a[0] = 1, a[n-1] = 2;
    for(int &x : a) cout << x << " ";
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