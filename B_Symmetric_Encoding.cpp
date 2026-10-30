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
    set<char> st(all(s));
    vector<char> a(all(st));
    sort(all(a));
    int m = a.size();

    unordered_map<char,char> mp;
    for(int i = 0; i < m; i++){
        mp[a[i]] = a[m-1-i];
    }
    for(int i = 0; i < n; i++){
        
        s[i] = mp[s[i]];
    }
    cout << s << endl;
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