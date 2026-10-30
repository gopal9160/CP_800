#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int x,y;
    cin >> x >> y;
    if(x%2 == y%2){
        if(x>=y) cout<<x<<endl;
        else cout<<-1<<endl;
    }else{
        if(x+1>=y) cout<<x+1<<endl;
        else cout<<-1<<endl;
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