#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool flag = 1;
    int i = 0;
    int j = k-1;
    while(i < n && j < n){
        if(s[i] != s[j]){
            flag = 0;
            break;
        }
        i++;
        j++;
    }
    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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