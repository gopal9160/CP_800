#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    map<int,int> mp;
    for(int i = n-1; i >= 0; i--) mp[a[i]] = i+1;
    while(q--){
        int num;
        cin >> num;
        cout << mp[num] << " ";
        for(auto &it : mp){
            if(it.second < mp[num]){
                it.second++;
            }
        }
        mp[num] = 1;
    }
    cout << endl;
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