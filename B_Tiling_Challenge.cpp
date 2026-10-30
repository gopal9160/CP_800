#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
bool fun(int i, int j, vector<string> &a){
    if(a[i+1][j]=='.' && a[i-1][j]=='.' && a[i][j+1]=='.' && a[i][j-1]=='.'){
        a[i+1][j] = '#';
        a[i-1][j] = '#';
        a[i][j+1] = '#';
        a[i][j-1] = '#';
        return true;
    }else{
        return false;
    }
}
void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    for(string &s : a) cin >> s;
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            if(a[i][j] == '.'){
                c++;
            }
        }
    }
    if(c % 5 != 0){
        cout << "NO\n";
    }else{
        int shapes = c / 5;
        int tiles = 0;
        for(int i = 1; i < n-1; i++){
            for(int j = 1; j < n-1; j++){
                if(a[i][j]=='#') continue;
                if(fun(i,j,a)){
                    tiles++;
                }
            }
        }
        if(tiles == shapes){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
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