#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zero = 0,one = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i]=='0'){
                zero++;
            }else{
                one++;
            }
        }
        if(zero==one){
            cout << 0 << endl;
            continue;
        }
        int len = 0;
        int limit = 2 * min(zero,one);
        for(int i = 0; i < n && limit > 0; i++){
            if(s[i]=='1'){
                s[i] = '0';
                len++;
            }else{
                s[i] = '1';
                len++;
            }
            limit--;
        }
        cout << n - len << endl;
    }
    return 0;
}