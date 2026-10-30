#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string s1,s2;
    cin >> s1 >> s2;
    int maxi = 0;
    int n1 = s1.size();
    int n2 = s2.size();
    for(int  i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            int l = i, r = j;
            while(l < n1 && r < n2 && s1[l]==s2[r]) {l++,r++;}
            maxi = max(maxi, l-i);
        }
    }
    int ans = (n1 + n2) - (2*maxi);
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