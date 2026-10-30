#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            cout << "YES\n";
            continue;
        }
        int odd = 0;
        for(auto it:mp){
            if(it.second % 2==1){
                odd++;
            }
        }
        if(odd > k + 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
        
    }
    return 0;
}