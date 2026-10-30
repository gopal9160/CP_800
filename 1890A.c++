#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            if(mp.size()>2){
                break;
            }else{
                mp[a[i]]++;
            }
        }
        int first = 0,second = 0;
        if(mp.size()>2){
            cout << "NO\n";
            continue;
        }else{
            for(auto &p : mp){
                first = p.second;
                break;
            }
            for(auto &p : mp){
                second = p.second;
            }
        }
        int diff = abs(first-second);
        if(diff <= 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}