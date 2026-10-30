#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26);
    for(int i = 0; i < n; i++){
        a[s[i]-'a'] = i;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        char c = s[i];
        for(char c = s[i]-1; c >= 'a'; c--){
            if(a[c-'a'] > i){
                cout << "YES" << endl;
                cout <<  i+1 << " " << a[c-'a']+1;
                return;
            }
        }
    }
    cout << "NO" << endl;
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