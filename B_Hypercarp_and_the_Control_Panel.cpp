#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    
    vector<pair<int,int>> v;
    for(int i = 0; i < n; ){
        int j = i;
        while (j < n && a[j] == a[i]) j++;
        v.push_back({a[i],j - i});
        i = j;
    }
    int ans = v.size(), maxi = 0;
    for(int i = 0; i < ans; i++){
        if(v[i].second>=2){
            maxi = max(1,maxi);
        }
        if(i+1 < ans && v[i+1].second>=2 && v[i].second>=2){
            maxi = max(2,maxi);
        }
    }
    cout << min(maxi+ans,n) << endl;
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