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
    map<char,int> mp;
    for(char c : s) mp[c]++;
    int ans = 0, count = 0;
    for(int i = n-1; i >= 0; i--){
        ans += mp.size();
        mp[s[i]]--;
        if(mp[s[i]]==0){
            mp.erase(s[i]);
        }
    }
    cout << ans << endl;
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