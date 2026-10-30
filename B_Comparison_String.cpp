#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ans = 1;
        int c = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                c++;
            }else{
                c = 1;
                ans = max(c,ans);
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}