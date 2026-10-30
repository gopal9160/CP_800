#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    ll n = s.size();
    unordered_map<char,int> mp;
    for(char c : s) mp[c]++;
    ll cnt = 0;
    char oddchar;
    for(auto &it : mp){
        if(it.second % 2 == 1){
            cnt++;
            oddchar = it.first;
        }
    }
    if(cnt > 1){
        cout << "NO SOLUTION" << endl;
    }else{
        ll i = 0, j = n-1;
        string res(n, ' ');
        for(auto &p : mp){
            while(p.second >= 2){
                res[i] = p.first;
                res[j] = p.first;
                i++;
                j--;
                p.second-=2;
            }
        }
        if(cnt == 1){
            res[i] = oddchar;
        }
        cout << res << endl;
    }
    return 0;
}