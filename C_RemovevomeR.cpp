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

    string s1 = s;
    int change = 0;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]){
            change++;
        }
    }
    if(s[0] != s[n-1] and change <= 1){
        cout << 2 << endl;
    }else{
        cout << 1 << endl;
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