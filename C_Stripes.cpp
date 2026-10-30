#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    vector<string> a(8);
    for(int i = 0; i < 8; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 8; i++){
        bool flag = 1;
        for(int j = 0; j < 8; j++){
            if(a[i][j] != 'R'){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << 'R' << endl;
            return;
        }
    }
    cout << 'B' << endl;
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