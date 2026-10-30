#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int res = 0;
        if(n <= 9){
            cout << n << endl;
            continue;
        }
        int digits = 0;
        int num = n;
        while(num!=0){
            num /= 10;
            digits++;
        }
        if(digits==2){
            res = 9 + (n/10);
        }
        else if(digits==3){
            res = 18 + (n/100);
        }
        else if(digits==4){
            res = 27 + (n/1000);
        }
        else if(digits==5){
            res = 36 + (n/10000);
        }
        else if(digits==6){
            res = 45 + (n/100000);
        }
        cout << res << endl;
        
    }
    return 0;
}