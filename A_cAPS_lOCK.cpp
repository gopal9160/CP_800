#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    bool b1=1,b2 = 1;
    for(char c : s){
        if(islower(c)){
            b1=0;
            break;
        }
    }
    for(int i = 1; i < n; i++){
        if(islower(s[i])){
            b2 = 0;
            break;
        }
    }
    if(b1 || b2){
        for(char &c : s){
            if(isupper(c)){
                c = tolower(c);
            }else{
                c = toupper(c);
            }
        }
    }
    cout << s << endl;
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