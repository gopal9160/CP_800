#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        if(d < b){
            cout << -1 << endl;
            continue;
        }
        int ver = d-b;
        a += ver;
        b += ver;
        long long  hori = a-c;
        long long  res = ver + hori;
        if(hori < 0){
            cout << -1 << endl;
        }else{
            cout << res << endl;
        }

    }
    return 0;
}