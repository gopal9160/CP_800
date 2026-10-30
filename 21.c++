#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int j = n-1;
        int i = 0;
        for(i = 0; i < n; i++){
            if(s[i] == s[j]){
                break;
            }
            j--;
        }
        int len = j - i +1;
        if(len > 0){
            cout << len << endl;
        }else{
            cout << 0 << endl;
        }
        
    }
    return 0;
}