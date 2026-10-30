#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        v[i].first = a[i]; 
        v[i].second = b[i];
    }
    sort(all(v));
    for(int i = 0; i < n; i++){
        cout << v[i].first << " ";
    }
    cout << endl;
    for(int i= 0; i< n; i++){
        cout << v[i].second << " ";
    }
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