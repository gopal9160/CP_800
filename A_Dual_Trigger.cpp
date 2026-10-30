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
    int one = 0;
    for(char c : s){
        if(c=='1') one++;
    }
    if(one == 2){
        for(int i = 1; i < n; i++){
            if(s[i]=='1' && s[i-1]=='1'){
                cout << "NO\n";
                return;
            }
        }
    }
    if(one % 2==0){
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