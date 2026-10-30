#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    if(k < n || k > (2*n -1)){
        cout << -1 << endl;
    }else{
        if(n==1){
            cout << 1 << endl;
            return;
        }
        int maxi = 2*n - 1, mini = n;
        int limit = maxi - k + 1;
        int num = limit + 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i==j && i <= limit){
                    cout << i << " ";
                }else{
                    cout << num << " ";
                    num++;
                }
            }
            cout << endl;
        }
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