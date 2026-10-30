#include<bits/stdc++.h>
using namespace std;

void divs(int x, unordered_map<int,int> &mp){
    while(x % 2 == 0){
        mp[2]++;
        x /= 2;
    }
    for(int i = 3; i * i <= x; i++){
        while(x % i == 0){
            mp[i]++;
            x /= i;
        }
    }
    if(x > 1){
        mp[x]++;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        
        unordered_map<int,int> mp;
        int p = 2;
        for(int i=0; i < n; i++){
            int x = a[i];
            divs(x,mp);
        }
        bool flag = 1;
        for(auto &it : mp){
            if(it.second % n != 0){
                flag = 0;
                break;
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
