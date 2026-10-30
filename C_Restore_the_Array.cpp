#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n-1);
    for(int &x : a) cin >> x;
    vector<int> res(n);
    res[0] = a[0], res[n-1] = a[n-2];
    for(int i = 1; i < n-1; i++){
        res[i] = min(a[i], a[i-1]);
    }
    for(int x : res){
        cout << x << " ";
    }
    cout << endl;}

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