#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int res = 1, n = s.size();
    int ans = INT_MIN;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            res++;
            ans = max(res,ans);
        }else{
            res = 1;
        }
    }
    if(ans >= 7){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}