#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    string res = "";
    int n = s.size();
    for(int i=0; i < n; i++){
        char c = tolower(s[i]);
        if(c == 'a' || c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
            continue;
        }else{
            res += '.';
            res.pb(c);
        }
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}