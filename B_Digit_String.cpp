#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '4'){
                ans++;
            }
        }
        vector<int> pre(n,-1), suff(n,-1);
        int d1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '4') continue;
            pre[i] = d1;
            if(s[i] == '1' || s[i] == '3'){
                d1++;
            }
        }
        int d2 = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '4') continue;
            suff[i] = d2;
            if(s[i] == '2'){
                d2++;
            }
        }
        int res = INT_MAX;
        for(int i = 0; i < n; i++){
            if(pre[i] == -1 || suff[i] == -1) continue;
            res = min(res,pre[i] + suff[i]);
        }
        if(res == INT_MAX){
            cout << ans << endl;
        }else{
            cout << ans + res << endl;
        }
    }
    return 0;
}