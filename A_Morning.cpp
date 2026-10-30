#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ops = 4;
        int cursor = 1;
        for(int i = 0; i < 4; i++){
            int d = s[i] - '0';
            if(d == 0){
                ops += abs(cursor - 10);
                cursor = 10;
            }else{
                ops += abs(cursor - d);
                cursor = d;
            }
        }
        cout << ops << endl;
    }
    return 0;
}