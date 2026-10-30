#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    unordered_map<char,int> mp;
    string res = "";
    for(char c = 'a'; c <= 'z'; c++){
        mp[c] = 0;
    }
    for(int i = 0; i < n; i++){
        for(auto &it : mp){
            if(it.second==a[i]){
                res += it.first;
                it.second++;
                break;
            }
        }
    }
    cout << res << endl;
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