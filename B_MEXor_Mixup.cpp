#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int m,xorr;
    cin >> m >> xorr;
    
    int a = (m-1) % 4;
    int x = 0;
    if(a==0){
        x = m-1;
    }else if(a==1){
        x = 1;
    }else if(a==2){
        x = m;
    }else{
        x = 0;
    }
    if(x == xorr){
        cout << m << endl;
    }else if((x ^ xorr) != m){
        cout << m +1 << endl;
    }else{
        cout << m+2 << endl;
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