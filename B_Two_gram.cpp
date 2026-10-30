#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string,int> mp;
    for(int i = 1; i < n; i++){
        mp[s.substr(i-1,2)]++;
    }
    string res = "";
    int maxi = INT_MIN;
    for(auto &p : mp){
        if(p.second > maxi){
            maxi = p.second;
            res = p.first;
        }
    }
    cout << res << endl;
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