#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    char c;
    cin >> c;
    string s;
    cin >> s;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    unordered_map<char, int> mp;
    for(int i = 0; i < s1.size(); i++) mp[s1[i]] = i;
    for(char c1: s){
        if(c=='R'){
            cout << s1[mp[c1]-1];
        }else{
            cout << s1[mp[c1]+1];
        }
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