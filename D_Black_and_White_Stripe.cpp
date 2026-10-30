#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    string s;;
    cin >> s;
    int j = 0;
    int c = 0;
    for(j = 0; j < k; j++){
        if(s[j] == 'B'){
            c++;
        }
    }
    int maxi = c;
    int l = 0;
    for(int i = k; i < n; i++){
        if(s[l]=='B'){
            c--;
        }
        l++;
        if(s[i]=='B'){
            c++;
        }
        maxi = max(maxi,c);
    }
    if(maxi >= k){
        cout << 0 << endl;
    }else{
        cout << k - maxi << endl;
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