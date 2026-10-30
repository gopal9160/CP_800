#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int p;
    cin >> p;
    int l = 0, r = 0;
    int x = a[p-1];
    int len = 0;
    for(int i = 0; i < p-1; i++){
        if(a[i] == x) continue;
        else{
            while(i < n && a[i]!=x) i++;
            l++;
        }
    }
    for(int i = p-1; i < n; i++){
        if(a[i] == x) continue;
        else{
            while(i < n && a[i]!=x) i++;
            r++;
        }
    }
    cout << 2 * max(l,r) << endl;
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