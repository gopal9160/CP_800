#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt = 0;
        int n = s.size();
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                cnt++;
            }
        } 
        if(cnt > 2){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}