#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,q;
    cin >> r >> c >> q;
    while(q--){
        int type,n;
        cin >> type >> n;
        if(type==1){
            int ch = c * n;
            r = r-n;
            cout << ch << endl;
        }else{
            int ch = r * n;
            c = c-n;
            cout << ch << endl;
        }
    }
    return 0;
}