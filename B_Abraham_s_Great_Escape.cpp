#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    vector<vector<char>> res(n,vector<char>(n));
    int cells = n*n;
    if(cells < k){
        cout << "NO\n";
    }
    if(cells > k){
        if((cells - k) < 2){
            cout << "NO\n";
            return;
        }
    }
        cout << "YES\n";
        int count = k;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(count>0){
                    res[i][j] = 'L';
                    count--;
                }else{
                    if(j == n-1 && res[i][j-1]=='R'){
                        res[i][j] = 'L';
                    }else if(j == n-1 && res[i][j-1]=='L'){
                        res[i][j] = 'D';
                    }else{
                        res[i][j] = 'R';
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << res[i][j];
            }
            cout << endl;
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