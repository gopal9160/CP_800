#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        string s,t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        unordered_map<char,int> mp;
        for(int i = 0; i < m; i++){
            mp[t[i]]++;
        }
        for(int i = n-1; i >= 0; i--){
            if(mp[s[i]]==0){
                s.erase(i,1);
            }else{
                mp[s[i]]--;
            }
        }
        if(s==t){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}