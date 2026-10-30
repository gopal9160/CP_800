#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , l , r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    unordered_map<char,int> mp;
    int low = 0;
    int count = 0; 
    for(int high = 0; high < n; high++){
        if(high - l >= 0){
            mp[s[high]]++;
        }
        if(high-low > r){
            mp[s[low]]--;
            if(mp[s[low]]==0){
                mp.erase(s[low]);
            }
            low++;
        }
        count += mp[s[high]];
    }
    cout << count << endl;
    return 0;
}