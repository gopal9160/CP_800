#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    vector<int> flip(n);
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(a[i]=='1') one++;
        else zero++;

        if(one == zero){
            flip[i] = 1;
        }else{
            flip[i] = 0;
        }
    }
    bool flag = 1;
    bool isfliped = 0;
    for(int i = n-1; i >= 0; i--){
        if(isfliped==false){
            if(a[i]!=b[i]){
                if(flip[i]){
                    isfliped = !isfliped;
                }else{
                    flag = 0;;
                    break;
                }
            }
        }else{
            if(a[i]==b[i]){
                if(flip[i]){
                    isfliped = !isfliped;
                }else{
                    flag = 0;
                    break;
                }
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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