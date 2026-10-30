#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int empty = 0;
        bool mini = false;
        int ans = 2;
        for(int i = 0; i < n; i++){
            if(s[i]=='.'){
                empty++;
            }
            if(i > 0 && i < n-1){
                if(s[i+1]=='.' && s[i-1]=='.' && s[i]=='.'){
                    cout << ans << endl;
                    mini = true;
                    break;
                }
            }
        }
        if(!mini) cout << empty << endl;
    }
    return 0;
}