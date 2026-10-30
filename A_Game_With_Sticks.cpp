#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b;
    cin >> a >> b;
    int ans = a + b;
    if(a != b){
        if(min(a,b) & 1 ==1){
            cout << "Akshat\n";
        }else{
            cout << "Malvika\n";
        }
    }else{
        if(a & 1 == 1){
            cout << "Akshat\n";
        }else{
            cout << "Malvika\n";
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