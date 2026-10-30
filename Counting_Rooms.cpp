#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
int x[4] = {0,0,1,-1};
int y[4] = {-1,1,0,0};
void dfs(int i, int j, vector<vector<int>> &vis, vector<string> &a){
    int n = a.size();
    int m = a[0].size();
    vis[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int r = i + x[k];
        int c = j + y[k];
        if(r >= n || r < 0 || c >= m || c < 0 || vis[r][c] || a[r][c]=='#'){
            continue;
        }else{
            dfs(r,c,vis,a);
        }
    }
}
void solve() {
    int n,m;
    cin >> n >> m;
    vector<string> a(n);
    for(auto &x : a){
        cin >> x;
    }

    vector<vector<int>> vis(n,vector<int> (m,0));
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '.' && !vis[i][j]){
                dfs(i,j,vis,a);
                ans++;
            }
        }
    }
    cout << ans << endl;
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