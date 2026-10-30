#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int neg = 0, pos = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==-1){
            neg++;
        }else{
            pos++;
        }
    }
    if(neg==pos){
        cout << "YES\n";
        return;
    }
    if(n % 2==1){
        cout << "NO\n";
        return;
    }else{
        int dif = n / 2;
        if(dif % 2 == 0){
            if(neg % 2 == 0){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }else{
            if(neg % 2 == 1){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
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