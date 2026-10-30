#include <bits/stdc++.h>
using namespace std;
int sum(long long n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        int c = 0;
        for(long long y = x; y <= x+90; y++){
            if(y - sum(y) == x){
                c++;
            }
        }
        cout << c << endl;
    }
}