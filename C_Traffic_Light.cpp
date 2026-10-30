#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        if(c=='g'){
            cout << 0 << endl;
            continue;
        }
        s += s;
        int ans = 0;
        int lg = -1;
        for(int i = 2*n-1; i >= 0; i--){
            if(s[i] == 'g'){
                lg = i;
            }
            if(s[i] == c){
                ans = max(ans,lg-i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}