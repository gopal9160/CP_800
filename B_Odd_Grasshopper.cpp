#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,n;
        cin >> x >> n;
        long long a = n % 4;
        if(a==0){
            cout << x << endl;
            continue;
        }
        while(a > 0){
            long long temp = n - a + 1;
            if(x % 2==0){
                x = x - temp;
            }else{
                x = x + temp;
            }
            a--;
        }
        cout << x << endl;
    }
    return 0;
}