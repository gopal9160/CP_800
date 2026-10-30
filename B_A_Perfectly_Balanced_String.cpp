#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int j = 0;
    map<char, int> mp1;
    for(char c : s) mp1[c]++;
    int k = mp1.size();
    map<char, int> mp;
    bool flag = 1;
    for(int i = 0; i < n; i++){
        if(mp.find(s[i]) != mp.end()){
            if(j < n && s[i]!=s[j]){
                flag = 0;
                break;
            }else{
                j++;
            }
        }else{
            if(i >= k){
                flag = 0;
                break;
            }
        }
        mp[s[i]]++;
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
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