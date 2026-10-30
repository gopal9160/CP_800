#include <bits/stdc++.h>
using namespace std;

#define pb push_back
// #define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    int c1 = 0,c2 = 0,c3 = 0,c4 = 0;
    for(int i = 0; i < n; i++){
        if(a[i]=='0'){
            if(i % 2==0){
                c1++;
            }else{
                c2++;
            }
        }
        if(b[i]=='0'){
            if(i % 2 == 0){
                c3++;
            }else{
                c4++;
            }
        }
    }
    if(c1 == c3 && c2 == c4){
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