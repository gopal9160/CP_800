#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long res = LLONG_MIN;
        long long len = 0;
        for(int i = 1; i < 40; i ++){
            if(n % i == 0){
                len++;
                res = max(len,res);
            }else{
                len = 0;
                res = max(len,res);
            }
        }
        cout << res << endl;
    }
    return 0;
}