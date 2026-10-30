#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int one = 0, zero = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '1') one++;
            else zero++;
        }
        int t = min(zero,one);
        if(t % 2 == 1){
            cout << "DA\n";
        }else{
            cout << "NET\n";
        }
    }
    return 0;
}