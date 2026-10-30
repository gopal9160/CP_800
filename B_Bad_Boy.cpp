#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , m , i, j;
        cin >> n >> m >> i >> j;
        if(n==1){
            cout << 1 << " " << 1 << " " << 1 << " " << m << endl;
            continue;
        }
        if(m==1){
            cout << 1 << " " << 1 << " " << n << " " << 1 << endl;
            continue;
        }
        int x1 = 0, y1 = 0, x2 = 0,y2 = 0;
        if(abs(m-j) >= abs(1-j)){
            y1 = m;
        }else{
            y1 = 1;
        }
        if(abs(n-i) >= abs(1-i)){
            x1 = n;
        }else{
            x1 = 1;
        }
        if(x1==n){
            x2 = 1;
        }else{
            x2 = n;
        }
        if(y1 == m){
            y2 = 1;
        }else{
            y2 = m;
        }
        cout << x1 << " " << y1 << " " <<  x2 << " " << y2 << endl;
    }
    return 0;
}