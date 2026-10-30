#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
        long long mul=1;
        for(int i = 0; i < n ;i++){
            int x;
            cin >> x;
            mul *= x;
        }
        if(2023 % mul !=0 ){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<(2023/mul)<<" ";
            k--;
            while(k--){
                cout<<1<<" ";
            }
            cout<<endl;
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