#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for(char c : s){
        if(c == '1'){
            one++;
        }else{
            zero++;
        }
    }
    if(one == 0){
        cout << 0 << endl;
        return;
    }
    if(n % 2 == 1 && one % 2 == 1){
        cout << -1 << endl;
        return;
    }
    if(one % 2 == 0){
        cout << one << endl;
        for(int i = 0; i < n; i++){
            if(s[i]=='1'){
                cout << i + 1 <<  " ";
            }
        }
        cout << endl;
        return;
    }else if(zero % 2){
        cout << zero << endl;
        for(int i = 0; i < n; i++){
            if(s[i]=='0'){
                cout << i + 1 << " "; 
            }
        }
        cout << endl;
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