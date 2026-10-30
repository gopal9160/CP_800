#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            a[i][j] = s[j] - '0';
        }
    }
    int q;
    cin >> q;
    vector<vector<int>> b(n+1,vector<int>(m+1,0));

    while(q--){
        int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1--,r2--,c1--,c2--;
        b[r1][c1]++;
        b[r1][c2+1]--;
        b[r2+1][c1]--;
        b[r2+1][c2+1]++;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i][j] += b[i-1][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            b[i][j] += b[i][j-1];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(b[i][j] % 2 == 1){
                a[i][j] ^= 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
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