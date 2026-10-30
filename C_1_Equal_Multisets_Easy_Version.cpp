#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        unordered_map<int,int> mp;
        for(int i = k; i < n; i++){
            mp[a[i]]++;
        }
        bool flag = true;
        for(int i = 0; i < k; i++){
            if(mp[b[i]]==1){
                flag = 0;
            }
        }
        unordered_map<int,int> mp1;
        for(int i = k; i < n; i++){
            mp[b[i]]++;
        }
        for(auto it : mp1){
            if(it.second > 1){
                flag = 0;
            }
        }
        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}