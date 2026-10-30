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
    
    vector<int> res;
    res.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(res.back()!=a[i]){
            res.push_back(a[i]);
        }
    }
    int m = res.size();
    for(auto it : res){
        cout << it << " ";
    }
    for(int i = m; i < n; i++){
        cout << a[i] << " ";
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