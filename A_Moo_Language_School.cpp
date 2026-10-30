#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int john = 0, noj = 0;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='0') flag = 1;
        if((i + 1) % k == 0){
            if(flag==0) noj++;
            else flag = 0;
        }
    }
    cout << noj << endl;
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