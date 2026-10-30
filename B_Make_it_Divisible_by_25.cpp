#include<bits/stdc++.h>
using namespace std;
int ops(string &s,string &d){
    int cnt = 0;
    int n = s.size() -1;
    int j = 1;
    for(int i = n; i >= 0; i--){
        if(s[i]==d[j]){
            j--;
            if(j < 0) break;
        }else{
            cnt++;
        }
    }
    if(j >= 0){
        return INT_MAX;
    }else{
        return cnt;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<string> v = {"00","25","50","75"};
        int ans = INT_MAX;
        for(auto d : v){
            ans = min(ans,ops(s,d));
        }
        cout << ans << endl;
    }

    return 0;
}