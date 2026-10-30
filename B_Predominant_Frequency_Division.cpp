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
    int one = 0, two = 0, three = 0, ans = 0;
    bool res = 0;
    int i = 0;
    for(; i < n; i++){
        if(a[i]==1) one++;

        if(one>=(i+1-one)){
            ans++;
            i++;
            while(i < n && a[i] == 3){
                if(one < (i+1-one)){
                    break;
                }
                i++;
            }
            break;
        }
    }
    if(i==n){
        cout<<"NO\n";
        return;
    }
    int c1 = 0, c2 = 0;
    for(; i < n; i++){
        if(a[i] != 3){
            c1++;
        }else{
            c2++;
        }   
        if(c1>=c2){
            ans++;
            break;
        }
    }
    if(i < n-1 && ans==2){
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