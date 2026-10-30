#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b; 
    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            c1 += a[i] == '0';
            c2 += b[i] == '0';
        }else{
            c2 += a[i] == '0';
            c1 += b[i] == '0';
        }
    }
    if(c2 >= (n+1)/2 && c1 >= n/2){
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